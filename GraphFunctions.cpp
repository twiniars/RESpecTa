#include "GraphFunctions.h"
#include <QtGui>


using namespace boost;
using namespace std;

template <class VertexIter, class theGraph>
QStringList getStateNames(VertexIter first, VertexIter last, const theGraph &G)
{
    QStringList items;
    typedef typename property_map<theGraph, state_t>::const_type StateMap;
       StateMap stateMap = get(state_t(), G);

       typedef typename property_traits<StateMap>::value_type StateType;
       StateType st;

       while (first != last)
       {
         st = boost::get(stateMap, *first);
         //std::string tmp = st.getName();
         std::string tmp = st.stateName;
         items<< (tmp.c_str());
         ++first;
       }
       return items;
}





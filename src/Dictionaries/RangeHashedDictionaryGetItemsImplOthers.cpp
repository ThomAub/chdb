#include <Dictionaries/RangeHashedDictionaryGetItemsImpl.txx>

namespace DB
{
INSTANTIATE_GET_ITEMS_IMPL_FOR_ATTRIBUTE_TYPE(UUID);
INSTANTIATE_GET_ITEMS_IMPL_FOR_ATTRIBUTE_TYPE(IPv4);
INSTANTIATE_GET_ITEMS_IMPL_FOR_ATTRIBUTE_TYPE(IPv6);
INSTANTIATE_GET_ITEMS_IMPL_FOR_ATTRIBUTE_TYPE(String);
INSTANTIATE_GET_ITEMS_IMPL_FOR_ATTRIBUTE_TYPE(Array);
}
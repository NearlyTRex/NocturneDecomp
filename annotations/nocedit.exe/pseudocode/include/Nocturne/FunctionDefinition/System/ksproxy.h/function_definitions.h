#pragma once

// Function Definition: IKsPropertySet_Get
typedef HRESULT (*IKsPropertySet_Get)(IKsPropertySet* this_ptr, LPGUID rguidPropSet, ulong ulId, LPVOID pInstanceData, ulong ulInstanceLength, LPVOID pPropertyData, ulong ulDataLength, PULONG pulBytesReturned);

// Function Definition: IKsPropertySet_QuerySupport
typedef HRESULT (*IKsPropertySet_QuerySupport)(IKsPropertySet* this_ptr, LPGUID rguidPropSet, ulong ulId, PULONG pulTypeSupport);

// Function Definition: IKsPropertySet_Set
typedef HRESULT (*IKsPropertySet_Set)(IKsPropertySet* this_ptr, LPGUID rguidPropSet, ulong ulId, LPVOID pInstanceData, ulong ulInstanceLength, LPVOID pPropertyData, ulong ulDataLength);


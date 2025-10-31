#pragma once

// Structure: WatcomDestructorCall
typedef struct WatcomDestructorCall {
    int delete_flags;
    void* destructor_func;
    void* object_instance;
} WatcomDestructorCall;

// Structure: WatcomDestructorFlags
typedef struct WatcomDestructorFlags {
    byte field_0[38];
    undefined1 field_38;
    undefined1 field_39;
    undefined1 field_40;
    undefined1 field_41;
    undefined1 field_42;
    undefined1 field_43;
    undefined1 field_44;
    undefined1 field_45;
    undefined1 field_46;
    undefined1 field_47;
} WatcomDestructorFlags;

// Structure: WatcomInheritanceLayout
typedef struct WatcomInheritanceLayout {
    WatcomTypeInfo* base_type;
    int offset_to_base;
} WatcomInheritanceLayout;

// Structure: WatcomStaticDestructorNode
typedef struct WatcomStaticDestructorNode {
    WatcomStaticDestructorNode* next;
    WatcomDestructorCall* destructor_info;
    int registration_type;
    void* object_instance;
} WatcomStaticDestructorNode;

// Structure: WatcomThunkedDestructor
typedef struct WatcomThunkedDestructor {
    void* destructor_func;
    int* this_adjustment_ptr;
} WatcomThunkedDestructor;

// Structure: WatcomThunkedDestructorDirect
typedef struct WatcomThunkedDestructorDirect {
    void* destructor_func;
    int this_adjustment;
} WatcomThunkedDestructorDirect;

// Structure: WatcomTypeArrayInfo
typedef struct WatcomTypeArrayInfo {
    int obj_count;
    WatcomTypeInfo* type_info;
    void** obj_array;
} WatcomTypeArrayInfo;

// Structure: WatcomTypeInfo
typedef struct WatcomTypeInfo {
    int type_flags;
    WATCOM_DEFAULT_CONSTRUCTOR_FUNC* ctor;
    WATCOM_COPY_CONSTRUCTOR_FUNC* copy;
    WATCOM_VIRTUAL_DESTRUCTOR_FUNC* dtor;
    int instance_size;
    char* class_name;
} WatcomTypeInfo;

// Structure: WatcomVirtualBaseDescriptor
typedef struct WatcomVirtualBaseDescriptor {
    int flags;
    int offset_to_vbase;
} WatcomVirtualBaseDescriptor;


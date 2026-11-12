; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStairs * core_stairs_cpp_CStairs_dtor_FUN_00562380(CStairs *this_ptr,uint flags)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CStairsTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562380
        ;   Label: core_stairs.cpp_CStairs_dtor_FUN_00562380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562381
    TEST byte ptr [ESP + 0xc],0x4       ; 00562385
    JNZ 0x005623a6                      ; 0056238a
        ;   XREF to: 005623a6 (CONDITIONAL_JUMP)  ; LAB_005623a6
    PUSH 0x1                            ; 0056238c
    PUSH EBX                            ; 0056238e
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 0056238f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00562394
    MOV DL,byte ptr [ESP + 0xc]         ; 00562397
    MOV EBX,EAX                         ; 0056239b
    TEST DL,0x2                         ; 0056239d
    JNZ 0x005623c1                      ; 005623a0
        ;   XREF to: 005623c1 (CONDITIONAL_JUMP)  ; LAB_005623c1
    MOV EAX,EBX                         ; 005623a2
    POP EBX                             ; 005623a4
    RET                                 ; 005623a5
    PUSH 0x5fc050                       ; 005623a6 | g_CStairsTypeInfo
        ;   Label: LAB_005623a6
    PUSH EBX                            ; 005623ab
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 005623ac
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 005623b1
    PUSH EAX                            ; 005623b4
    CALL crt_unknown.c_FUN_005b7fce     ; 005623b5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 005623ba
    MOV EAX,EBX                         ; 005623bd
    POP EBX                             ; 005623bf
    RET                                 ; 005623c0
    PUSH EAX                            ; 005623c1
        ;   Label: LAB_005623c1
    CALL crt_unknown.c_FUN_005b7fdc     ; 005623c2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005623c7
    MOV EAX,EBX                         ; 005623ca
    POP EBX                             ; 005623cc
    RET                                 ; 005623cd


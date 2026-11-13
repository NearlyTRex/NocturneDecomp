; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGlass * __cdecl core_glass_cpp_CGlass_dtor_FUN_004c72f0(CGlass *this_ptr,uint flags)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGlassTypeInfo
;
; Called Functions:
;   core_actor.cpp_CDemonActor_dtor_FUN_00408930
;   core_mirror.cpp_FUN_004f98c0
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c72f0
        ;   Label: core_glass.cpp_CGlass_dtor_FUN_004c72f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c72f1
    TEST byte ptr [ESP + 0xc],0x4       ; 004c72f5
    JNZ 0x004c732d                      ; 004c72fa
        ;   XREF to: 004c732d (CONDITIONAL_JUMP)  ; LAB_004c732d
    PUSH 0x0                            ; 004c72fc
    ADD EBX,0x348                       ; 004c72fe
    PUSH EBX                            ; 004c7304
    CALL core_mirror.cpp_FUN_004f98c0   ; 004c7305
        ;   XREF to: 004f98c0 (UNCONDITIONAL_CALL)  ; CMirror * core_mirror.cpp_FUN_004f98c0(CMirror * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c730a
    PUSH 0x1                            ; 004c730d
    LEA EBX,[EAX + 0xfffffcb8]          ; 004c730f
    PUSH EBX                            ; 004c7315
    CALL core_actor.cpp_CDemonActor_dtor_FUN_00408930 ; 004c7316
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_dtor_FUN_00408930(CDemonActor * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004c731b
    MOV DL,byte ptr [ESP + 0xc]         ; 004c731e
    MOV EBX,EAX                         ; 004c7322
    TEST DL,0x2                         ; 004c7324
    JNZ 0x004c7348                      ; 004c7327
        ;   XREF to: 004c7348 (CONDITIONAL_JUMP)  ; LAB_004c7348
    MOV EAX,EBX                         ; 004c7329
    POP EBX                             ; 004c732b
    RET                                 ; 004c732c
    PUSH 0x5f7b70                       ; 004c732d | g_CGlassTypeInfo
        ;   Label: LAB_004c732d
    PUSH EBX                            ; 004c7332
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004c7333
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004c7338
    PUSH EAX                            ; 004c733b
    CALL crt_unknown.c_FUN_005b7fce     ; 004c733c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004c7341
    MOV EAX,EBX                         ; 004c7344
    POP EBX                             ; 004c7346
    RET                                 ; 004c7347
    PUSH EAX                            ; 004c7348
        ;   Label: LAB_004c7348
    CALL crt_unknown.c_FUN_005b7fdc     ; 004c7349
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004c734e
    MOV EAX,EBX                         ; 004c7351
    POP EBX                             ; 004c7353
    RET                                 ; 004c7354


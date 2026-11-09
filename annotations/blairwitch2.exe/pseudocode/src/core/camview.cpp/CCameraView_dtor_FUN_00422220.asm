; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00422220(CCameraView *this_ptr,uint flags)
;
; Parameters:
; CCameraView *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0043b460 at 0043b47f
;
; Referenced Globals:
;   undefined1* PTR_core_camview.cpp_CCameraView_dtor_FUN_00422220_005f4024 = 00422220
;   WatcomTypeInfo g_CCameraViewTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422220
        ;   Label: core_camview.cpp_CCameraView_dtor_FUN_00422220
    MOV EBX,dword ptr [ESP + 0x8]       ; 00422221
    MOV EAX,dword ptr [ESP + 0xc]       ; 00422225
    TEST AL,0x4                         ; 00422229
    JNZ 0x00422241                      ; 0042222b
        ;   XREF to: 00422241 (CONDITIONAL_JUMP)  ; LAB_00422241
    MOV dword ptr [EBX + 0x3c],0x5f4024 ; 0042222d | PTR_core_camview.cpp_CCameraView_dtor_FUN_00422220_005f4024
    TEST AL,0x2                         ; 00422234
    JNZ 0x0042225c                      ; 00422236
        ;   XREF to: 0042225c (CONDITIONAL_JUMP)  ; LAB_0042225c
    MOV EAX,EBX                         ; 00422238
    POP EBX                             ; 0042223a
    LEA EAX,[EAX]                       ; 0042223b
    MOV ECX,ECX                         ; 0042223e
    RET                                 ; 00422240
        ;   Label: LAB_00422240
    PUSH 0x5f4040                       ; 00422241 | g_CCameraViewTypeInfo
        ;   Label: LAB_00422241
    PUSH EBX                            ; 00422246
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 00422247
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005b7fa7()
    ADD ESP,0x8                         ; 0042224c
    PUSH EAX                            ; 0042224f
    CALL crt_unknown.c_FUN_005b7fce     ; 00422250
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 00422255
    MOV EAX,EBX                         ; 00422258
    POP EBX                             ; 0042225a
    RET                                 ; 0042225b
    PUSH EBX                            ; 0042225c
        ;   Label: LAB_0042225c
    CALL crt_unknown.c_FUN_005b7fdc     ; 0042225d
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 00422262
    MOV EAX,EBX                         ; 00422265
    POP EBX                             ; 00422267
    RET                                 ; 00422268


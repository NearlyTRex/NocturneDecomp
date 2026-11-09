; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_00428240(CCameraView *this_ptr,uint flags)
;
; Parameters:
; CCameraView *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_0044cb00 at 0044cb1f
;
; Referenced Globals:
;   undefined1* PTR_core_camview.cpp_CCameraView_dtor_FUN_00428240_005fd414 = 00428240
;   WatcomTypeInfo g_CCameraViewTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428240
        ;   Label: core_camview.cpp_CCameraView_dtor_FUN_00428240
    MOV EBX,dword ptr [ESP + 0x8]       ; 00428241
    MOV EAX,dword ptr [ESP + 0xc]       ; 00428245
    TEST AL,0x4                         ; 00428249
    JNZ 0x00428261                      ; 0042824b
        ;   XREF to: 00428261 (CONDITIONAL_JUMP)  ; LAB_00428261
    MOV dword ptr [EBX + 0x3c],0x5fd414 ; 0042824d | PTR_core_camview.cpp_CCameraView_dtor_FUN_00428240_005fd414
    TEST AL,0x2                         ; 00428254
    JNZ 0x0042827c                      ; 00428256
        ;   XREF to: 0042827c (CONDITIONAL_JUMP)  ; LAB_0042827c
    MOV EAX,EBX                         ; 00428258
    POP EBX                             ; 0042825a
    LEA EAX,[EAX]                       ; 0042825b
    MOV ECX,ECX                         ; 0042825e
    RET                                 ; 00428260
        ;   Label: LAB_00428260
    PUSH 0x5fd430                       ; 00428261 | g_CCameraViewTypeInfo
        ;   Label: LAB_00428261
    PUSH EBX                            ; 00428266
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 00428267
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 0042826c
    PUSH EAX                            ; 0042826f
    CALL crt_unknown.c_FUN_005c0336     ; 00428270
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00428275
    MOV EAX,EBX                         ; 00428278
    POP EBX                             ; 0042827a
    RET                                 ; 0042827b
    PUSH EBX                            ; 0042827c
        ;   Label: LAB_0042827c
    CALL crt_unknown.c_FUN_005c0344     ; 0042827d
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 00428282
    MOV EAX,EBX                         ; 00428285
    POP EBX                             ; 00428287
    RET                                 ; 00428288


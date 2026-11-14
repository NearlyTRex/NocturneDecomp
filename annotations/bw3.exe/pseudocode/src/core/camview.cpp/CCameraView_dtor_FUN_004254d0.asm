; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CCameraView * __cdecl core_camview_cpp_CCameraView_dtor_FUN_004254d0(CCameraView *this_ptr,uint flags)
;
; Parameters:
; CCameraView *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_dtor_FUN_00448c40 at 00448c5f
;
; Referenced Globals:
;   undefined1* PTR_core_camview.cpp_CCameraView_dtor_FUN_004254d0_005dcef4 = 004254d0
;   WatcomTypeInfo g_CCameraViewTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004254d0
        ;   Label: core_camview.cpp_CCameraView_dtor_FUN_004254d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004254d1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004254d5
    TEST AL,0x4                         ; 004254d9
    JNZ 0x004254f1                      ; 004254db
        ;   XREF to: 004254f1 (CONDITIONAL_JUMP)  ; LAB_004254f1
    MOV dword ptr [EBX + 0x3c],0x5dcef4 ; 004254dd | PTR_core_camview.cpp_CCameraView_dtor_FUN_004254d0_005dcef4
    TEST AL,0x2                         ; 004254e4
    JNZ 0x0042550c                      ; 004254e6
        ;   XREF to: 0042550c (CONDITIONAL_JUMP)  ; LAB_0042550c
    MOV EAX,EBX                         ; 004254e8
    POP EBX                             ; 004254ea
    LEA EAX,[EAX]                       ; 004254eb
    MOV ECX,ECX                         ; 004254ee
    RET                                 ; 004254f0
        ;   Label: LAB_004254f0
    PUSH 0x5dcf10                       ; 004254f1 | g_CCameraViewTypeInfo
        ;   Label: LAB_004254f1
    PUSH EBX                            ; 004254f6
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004254f7
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004254fc
    PUSH EAX                            ; 004254ff
    CALL crt_unknown.c_FUN_005a30b6     ; 00425500
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 00425505
    MOV EAX,EBX                         ; 00425508
    POP EBX                             ; 0042550a
    RET                                 ; 0042550b
    PUSH EBX                            ; 0042550c
        ;   Label: LAB_0042550c
    CALL crt_unknown.c_FUN_005a30c4     ; 0042550d
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 00425512
    MOV EAX,EBX                         ; 00425515
    POP EBX                             ; 00425517
    RET                                 ; 00425518


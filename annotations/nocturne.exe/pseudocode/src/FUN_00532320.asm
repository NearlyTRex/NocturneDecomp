; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00532320(void)
;
;
; XREF[6]:
;   FUN_0049cc10 at 0049d5ab
;   FUN_004a57c0 at 004a598e
;   FUN_00532ba0 at 00532c40
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00445020 at 00445091
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00471b50 at 00471e40
;   wincore_windll.cpp_setResolutionAndColorTable_FUN_005324a0 at 00532576
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9d98
;   undefined4 DAT_02dc9e20
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532320 | DAT_01c02594
        ;   Label: FUN_00532320
    JNZ 0x0053232c                      ; 00532327
        ;   XREF to: 0053232c (CONDITIONAL_JUMP)  ; LAB_0053232c
    XOR EAX,EAX                         ; 00532329
    RET                                 ; 0053232b
    MOV EAX,[0x02dc9e20]                ; 0053232c | DAT_02dc9e20
        ;   Label: LAB_0053232c
    MOV [0x005b7624],EAX                ; 00532331 | DAT_005b7624
    CALL dword ptr [0x02dc9d98]         ; 00532336 | DAT_02dc9d98
    RET                                 ; 0053233c


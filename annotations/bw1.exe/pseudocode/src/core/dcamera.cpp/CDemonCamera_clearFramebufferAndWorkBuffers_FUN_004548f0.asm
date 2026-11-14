; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0(CDemonCamera *this_ptr,int clear_color)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   clear_color
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d4917
;
; Referenced Globals:
;   undefined4 DAT_01342360
;   undefined4 DAT_01354f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004548f0
        ;   Label: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0
    PUSH ESI                            ; 004548f1
    PUSH EDI                            ; 004548f2
    PUSH EBP                            ; 004548f3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004548f4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004548f8
    MOV ECX,dword ptr [EDX + 0x148]     ; 004548fc
    XOR ESI,ESI                         ; 00454902
    TEST ECX,ECX                        ; 00454904
    JLE 0x0045493a                      ; 00454906
        ;   XREF to: 0045493a (CONDITIONAL_JUMP)  ; LAB_0045493a
    MOV EBP,dword ptr [EDX + 0x144]     ; 00454908
        ;   Label: LAB_00454908
    XOR EAX,EAX                         ; 0045490e
    TEST EBP,EBP                        ; 00454910
    JLE 0x00454931                      ; 00454912
        ;   XREF to: 00454931 (CONDITIONAL_JUMP)  ; LAB_00454931
    MOV ECX,dword ptr [EDX + 0x144]     ; 00454914
        ;   Label: LAB_00454914
    IMUL ECX,ESI                        ; 0045491a
    MOV EBX,dword ptr [EDX + 0x158]     ; 0045491d
    ADD ECX,EAX                         ; 00454923
    MOV dword ptr [EBX + ECX*0x4],EDI   ; 00454925
    INC EAX                             ; 00454928
    CMP EAX,dword ptr [EDX + 0x144]     ; 00454929
    JL 0x00454914                       ; 0045492f
        ;   XREF to: 00454914 (CONDITIONAL_JUMP)  ; LAB_00454914
    INC ESI                             ; 00454931
        ;   Label: LAB_00454931
    CMP ESI,dword ptr [EDX + 0x148]     ; 00454932
    JL 0x00454908                       ; 00454938
        ;   XREF to: 00454908 (CONDITIONAL_JUMP)  ; LAB_00454908
    MOV ESI,0x140                       ; 0045493a
        ;   Label: LAB_0045493a
    XOR ECX,ECX                         ; 0045493f
    MOV EDX,ESI                         ; 00454941
        ;   Label: LAB_00454941
    XOR BL,BL                           ; 00454943
    IMUL EAX,ECX,0x140                  ; 00454945
    INC EAX                             ; 0045494b
        ;   Label: LAB_0045494b
    MOV byte ptr [EAX + 0x1354e1f],BL   ; 0045494c | DAT_01354f60
    MOV byte ptr [EAX + 0x134221f],BL   ; 00454952 | DAT_01342360
    CMP EAX,EDX                         ; 00454958
    JNZ 0x0045494b                      ; 0045495a
        ;   XREF to: 0045494b (CONDITIONAL_JUMP)  ; LAB_0045494b
    INC ECX                             ; 0045495c
    ADD ESI,0x140                       ; 0045495d
    CMP ECX,0xf0                        ; 00454963
    JL 0x00454941                       ; 00454969
        ;   XREF to: 00454941 (CONDITIONAL_JUMP)  ; LAB_00454941
    POP EBP                             ; 0045496b
    POP EDI                             ; 0045496c
    POP ESI                             ; 0045496d
    POP EBX                             ; 0045496e
    RET                                 ; 0045496f


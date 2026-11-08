; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fefa0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_004cf5e0 at 004cf9a9
;
; Referenced Globals:
;   TerminatedCString s_gLevelIndicator_Used_d_c_005e6cea
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;
; Called Functions:
;   FUN_00445430
;   FUN_00467160
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004fefa0
        ;   Label: FUN_004fefa0
    MOV EDX,dword ptr [EAX]             ; 004fefa4
    PUSH EDX                            ; 004fefa6
    PUSH 0x5e6cea                       ; 004fefa7 | = "gLevelIndicator: Used %d calls\n"
    MOV ECX,dword ptr [0x00611100]      ; 004fefac | PTR_DAT_00611100
    PUSH ECX                            ; 004fefb2 | DAT_007db5f0
    MOV dword ptr [EAX + 0xc],0x0       ; 004fefb3
    CALL FUN_00445430                   ; 004fefba
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 004fefbf
    PUSH 0x1d1be4c                      ; 004fefc2
    CALL FUN_00467160                   ; 004fefc7
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined FUN_00467160()
    ADD ESP,0x4                         ; 004fefcc
    RET                                 ; 004fefcf


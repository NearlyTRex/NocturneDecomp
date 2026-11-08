; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c72d0(int param_1)
;
;
; XREF[8]:
;   FUN_0040a050 at 0040a7f9
;   FUN_0043a7a0 at 0043ad9c
;   FUN_00485b40 at 004862b6
;   FUN_004cbdc0 at 004cc59b
;   FUN_0052e940 at 0052ed0d
;   FUN_0053f170 at 0053f8e9
;   FUN_00575800 at 0057601a
;   FUN_0057fc20 at 00580157
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   FUN_0048e340
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c72d0
        ;   Label: FUN_004c72d0
    ADD EAX,0x468                       ; 004c72d4
    PUSH EAX                            ; 004c72d9
    MOV EDX,dword ptr [0x006141f0]      ; 004c72da | DAT_006141f0
    PUSH EDX                            ; 004c72e0
    CALL FUN_0048e340                   ; 004c72e1
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 004c72e6
    RET                                 ; 004c72e9


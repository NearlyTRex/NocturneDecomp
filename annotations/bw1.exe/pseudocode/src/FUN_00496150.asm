; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00496150(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[6]:
;   FUN_00495da0 at 00495dce
;   FUN_00495e70 at 00495ea9
;   FUN_00495f70 at 00495fb8
;   FUN_004d27b0 at 004d3f56
;   FUN_004d7e90 at 004d7ebb
;   FUN_0052e120 at 0052e9df
;
; Called Functions:
;   FUN_00493720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496150
        ;   Label: FUN_00496150
    PUSH ESI                            ; 00496151
    PUSH 0x0                            ; 00496152
    MOV EDX,dword ptr [ESP + 0x20]      ; 00496154
    PUSH EDX                            ; 00496158
    MOV ECX,dword ptr [ESP + 0x20]      ; 00496159
    PUSH ECX                            ; 0049615d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0049615e
    PUSH EBX                            ; 00496162
    MOV ESI,dword ptr [ESP + 0x20]      ; 00496163
    PUSH ESI                            ; 00496167
    CALL FUN_00493720                   ; 00496168
        ;   XREF to: 00493720 (UNCONDITIONAL_CALL)  ; undefined FUN_00493720()
    ADD ESP,0x14                        ; 0049616d
    POP ESI                             ; 00496170
    POP EBX                             ; 00496171
    RET                                 ; 00496172


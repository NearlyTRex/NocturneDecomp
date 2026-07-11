; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b660(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_00423f40 at 00423f56
;   FUN_00519be0 at 00519c2b
;   FUN_0051ad20 at 0051ad9c
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;   undefined1* PTR_FUN_005a1ed4 = 0051b6e0
;
; Called Functions:
;   FUN_004e1120
;   FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051b660
        ;   Label: FUN_0051b660
    PUSH EAX                            ; 0051b664
    CALL FUN_004e1120                   ; 0051b665
        ;   XREF to: 004e1120 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1120()
    ADD ESP,0x4                         ; 0051b66a
    PUSH 0x5993b0                       ; 0051b66d | DAT_005993b0
    PUSH 0x64                           ; 0051b672
    ADD EAX,0x58                        ; 0051b674
    PUSH EAX                            ; 0051b677
    CALL FUN_005644a7                   ; 0051b678
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    SUB EAX,0x58                        ; 0051b67d
    MOV dword ptr [EAX + 0x50],0x5a1ed4 ; 0051b680 | PTR_FUN_005a1ed4
    MOV byte ptr [EAX + 0x2260],0x0     ; 0051b687
    MOV dword ptr [EAX + 0x22b0],0x0    ; 0051b68e
    MOV dword ptr [EAX + 0x2234],0x0    ; 0051b698
    MOV dword ptr [EAX + 0x2230],0xffffffff ; 0051b6a2
    LEA EDX,[EAX + 0x2254]              ; 0051b6ac
    MOV dword ptr [EAX + 0x2250],0x0    ; 0051b6b2
    MOV dword ptr [EDX + 0x8],0x0       ; 0051b6bc
    ADD ESP,0xc                         ; 0051b6c3
    MOV ECX,dword ptr [EDX + 0x8]       ; 0051b6c6
    MOV dword ptr [EDX + 0x4],ECX       ; 0051b6c9
    MOV ECX,dword ptr [EDX + 0x4]       ; 0051b6cc
    MOV dword ptr [EDX],ECX             ; 0051b6cf
    MOV dword ptr [EAX + 0x54],0x3f800000 ; 0051b6d1
    RET                                 ; 0051b6d8


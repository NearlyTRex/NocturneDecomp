; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0057de80(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   FUN_00433f60 at 00433f7b
;   FUN_004341e0 at 004341f8
;   FUN_00435300 at 0043533a
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd4b4 = 0057df10
;
; Called Functions:
;   FUN_0057d860
;   FUN_0057e110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057de80
        ;   Label: FUN_0057de80
    PUSH ESI                            ; 0057de81
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057de82
    PUSH EDX                            ; 0057de86
    CALL FUN_0057d860                   ; 0057de87
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d860()
    MOV dword ptr [EAX],0x5fd4b4        ; 0057de8c | PTR_FUN_005fd4b4
    ADD ESP,0x4                         ; 0057de92
    MOV dword ptr [EAX + 0x4],0x0       ; 0057de95
    MOV ECX,dword ptr [ESP + 0x14]      ; 0057de9c
    MOV dword ptr [EAX + 0x8],0x0       ; 0057dea0
    PUSH ECX                            ; 0057dea7
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057dea8
    MOV dword ptr [EAX + 0xc],0x0       ; 0057deac
    PUSH ESI                            ; 0057deb3
    MOV dword ptr [EAX + 0x10],0x0      ; 0057deb4
    PUSH EAX                            ; 0057debb
    MOV EBX,EAX                         ; 0057debc
    MOV dword ptr [EAX + 0x14],0x1      ; 0057debe
    CALL FUN_0057e110                   ; 0057dec5
        ;   XREF to: 0057e110 (UNCONDITIONAL_CALL)  ; undefined FUN_0057e110()
    ADD ESP,0xc                         ; 0057deca
    MOV EAX,EBX                         ; 0057decd
    POP ESI                             ; 0057decf
    POP EBX                             ; 0057ded0
    RET                                 ; 0057ded1


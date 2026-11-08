; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005638a0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_0054bf00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005638a0
        ;   Label: FUN_005638a0
    PUSH EAX                            ; 005638a4
    CALL FUN_00408600                   ; 005638a5
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 005638aa
    ADD EAX,0x1d0                       ; 005638ad
    PUSH EAX                            ; 005638b2
    CALL FUN_0054bf00                   ; 005638b3
        ;   XREF to: 0054bf00 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf00()
    MOV dword ptr [EAX + -0x7c],0x5e4a24 ; 005638b8
    MOV dword ptr [EAX + -0x14],0x41f00000 ; 005638bf
    MOV byte ptr [EAX + -0x5a],0x0      ; 005638c6
    MOV byte ptr [EAX + -0x3c],0x0      ; 005638ca
    MOV dword ptr [EAX + 0xffffff30],0x1 ; 005638ce
    MOV dword ptr [EAX + -0x10],0x0     ; 005638d8
    MOV dword ptr [EAX + -0xc],0xa      ; 005638df
    MOV dword ptr [EAX + -0x18],0x0     ; 005638e6
    MOV dword ptr [EAX + -0x1c],0x0     ; 005638ed
    MOV dword ptr [EAX + -0x8],0x0      ; 005638f4
    ADD ESP,0x4                         ; 005638fb
    MOV dword ptr [EAX + -0x4],0x42c80000 ; 005638fe
    SUB EAX,0x1d0                       ; 00563905
    RET                                 ; 0056390a


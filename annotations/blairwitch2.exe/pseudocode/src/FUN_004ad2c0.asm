; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ad2c0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f736c
;
; Called Functions:
;   FUN_0044fd70
;   FUN_004ce240
;   FUN_005478b0
;   FUN_005adda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad2c0
        ;   Label: FUN_004ad2c0
    PUSH EBP                            ; 004ad2c1
    MOV EBP,ESP                         ; 004ad2c2
    MOV EBX,dword ptr [EBP + 0xc]       ; 004ad2c4
    PUSH EBX                            ; 004ad2c7
    CALL FUN_004ce240                   ; 004ad2c8
        ;   XREF to: 004ce240 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce240()
    ADD ESP,0x4                         ; 004ad2cd
    ADD EAX,0x25680                     ; 004ad2d0
    PUSH EAX                            ; 004ad2d5
    CALL FUN_005adda0                   ; 004ad2d6
        ;   XREF to: 005adda0 (UNCONDITIONAL_CALL)  ; undefined FUN_005adda0()
    LEA EBX,[EAX + 0xfffda980]          ; 004ad2db
    MOV dword ptr [EBX + 0x2b0],0x5f7384 ; 004ad2e1
    MOV dword ptr [EBX + 0x25640],0x0   ; 004ad2eb
    MOV dword ptr [EBX + 0x25644],0x0   ; 004ad2f5
    MOV dword ptr [EBX + 0x25648],0x0   ; 004ad2ff
    MOV dword ptr [EBX + 0x2564c],0x0   ; 004ad309
    MOV dword ptr [EBX + 0x25664],0x0   ; 004ad313
    MOV dword ptr [EBX + 0x25650],0x0   ; 004ad31d
    MOV dword ptr [EBX + 0x25654],0xbf060a92 ; 004ad327
    MOV dword ptr [EBX + 0x25678],0x0   ; 004ad331
    MOV dword ptr [EBX + 0x25670],0x0   ; 004ad33b
    MOV dword ptr [EBX + 0x25668],0x0   ; 004ad345
    MOV dword ptr [EBX + 0x2567c],0x0   ; 004ad34f
    FLD float ptr [0x005f736c]          ; 004ad359 | DAT_005f736c
    MOV dword ptr [EBX + 0x25658],0x0   ; 004ad35f
    ADD ESP,0x4                         ; 004ad369
    FSTP float ptr [EBX + 0x601b0]      ; 004ad36c
    MOV dword ptr [EBX + 0x2565c],0x0   ; 004ad372
    PUSH 0x5d6dc3                       ; 004ad37c
    MOV dword ptr [EBX + 0x25660],0x0   ; 004ad381
    LEA EAX,[EBX + 0x2b4]               ; 004ad38b
    FLD float ptr [EBX + 0x25670]       ; 004ad391
    FLD float ptr [EBX + 0x25668]       ; 004ad397
    PUSH EAX                            ; 004ad39d
    FXCH                                ; 004ad39e
    FSTP float ptr [EBX + 0x25674]      ; 004ad3a0
    FSTP float ptr [EBX + 0x2566c]      ; 004ad3a6
    CALL FUN_005478b0                   ; 004ad3ac
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    LEA EAX,[EBX + 0x2437c]             ; 004ad3b1
    MOV EDX,dword ptr [EAX + 0x468]     ; 004ad3b7
    ADD ESP,0x8                         ; 004ad3bd
    MOV EAX,dword ptr [EAX + EDX*0x4 + 0x610] ; 004ad3c0
    PUSH 0x5d6dd0                       ; 004ad3c7
    ADD EAX,0x2b4                       ; 004ad3cc
    PUSH EAX                            ; 004ad3d1
    CALL FUN_0044fd70                   ; 004ad3d2
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 004ad3d7
    MOV EAX,EBX                         ; 004ad3da
    POP EBP                             ; 004ad3dc
    POP EBX                             ; 004ad3dd
    RET                                 ; 004ad3de


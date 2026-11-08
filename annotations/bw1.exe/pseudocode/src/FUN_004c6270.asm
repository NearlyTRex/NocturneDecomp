; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c6270(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00600d8c
;
; Called Functions:
;   FUN_0043e5c0
;   FUN_00468950
;   FUN_004ea830
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6270
        ;   Label: FUN_004c6270
    PUSH EBP                            ; 004c6271
    MOV EBP,ESP                         ; 004c6272
    MOV EBX,dword ptr [EBP + 0xc]       ; 004c6274
    PUSH EBX                            ; 004c6277
    CALL FUN_004ea830                   ; 004c6278
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea830()
    ADD ESP,0x4                         ; 004c627d
    ADD EAX,0x1ffec                     ; 004c6280
    PUSH EAX                            ; 004c6285
    CALL FUN_0043e5c0                   ; 004c6286
        ;   XREF to: 0043e5c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043e5c0()
    LEA EBX,[EAX + 0xfffe0014]          ; 004c628b
    MOV dword ptr [EBX + 0x154],0x600da4 ; 004c6291
    MOV dword ptr [EBX + 0x1ffac],0x0   ; 004c629b
    MOV dword ptr [EBX + 0x1ffb0],0x0   ; 004c62a5
    MOV dword ptr [EBX + 0x1ffb4],0x0   ; 004c62af
    MOV dword ptr [EBX + 0x1ffb8],0x0   ; 004c62b9
    MOV dword ptr [EBX + 0x1ffd0],0x0   ; 004c62c3
    MOV dword ptr [EBX + 0x1ffbc],0x0   ; 004c62cd
    MOV dword ptr [EBX + 0x1ffc0],0xbf060a92 ; 004c62d7
    MOV dword ptr [EBX + 0x1ffe4],0x0   ; 004c62e1
    MOV dword ptr [EBX + 0x1ffdc],0x0   ; 004c62eb
    MOV dword ptr [EBX + 0x1ffd4],0x0   ; 004c62f5
    MOV dword ptr [EBX + 0x1ffe8],0x0   ; 004c62ff
    FLD float ptr [0x00600d8c]          ; 004c6309 | DAT_00600d8c
    MOV dword ptr [EBX + 0x1ffc4],0x0   ; 004c630f
    ADD ESP,0x4                         ; 004c6319
    FSTP float ptr [EBX + 0x5ab1c]      ; 004c631c
    MOV dword ptr [EBX + 0x1ffc8],0x0   ; 004c6322
    PUSH 0x5e0e3c                       ; 004c632c
    MOV dword ptr [EBX + 0x1ffcc],0x0   ; 004c6331
    LEA EAX,[EBX + 0x158]               ; 004c633b
    FLD float ptr [EBX + 0x1ffdc]       ; 004c6341
    FLD float ptr [EBX + 0x1ffd4]       ; 004c6347
    PUSH EAX                            ; 004c634d
    FXCH                                ; 004c634e
    FSTP float ptr [EBX + 0x1ffe0]      ; 004c6350
    FSTP float ptr [EBX + 0x1ffd8]      ; 004c6356
    CALL FUN_00569f50                   ; 004c635c
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    LEA EAX,[EBX + 0x1fae8]             ; 004c6361
    ADD ESP,0x8                         ; 004c6367
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c636a
    PUSH 0x5e0e49                       ; 004c6370
    ADD EAX,0x158                       ; 004c6375
    PUSH EAX                            ; 004c637a
    CALL FUN_00468950                   ; 004c637b
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004c6380
    MOV EAX,EBX                         ; 004c6383
    POP EBP                             ; 004c6385
    POP EBX                             ; 004c6386
    RET                                 ; 004c6387


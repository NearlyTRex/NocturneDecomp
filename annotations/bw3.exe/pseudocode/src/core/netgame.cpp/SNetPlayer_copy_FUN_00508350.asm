; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SNetPlayer * core_netgame_cpp_SNetPlayer_copy_FUN_00508350(SNetPlayer *this_ptr,SNetPlayer *other)
;
; Parameters:
; SNetPlayer *     Stack[0x4]:4   this_ptr
; SNetPlayer *     Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00508350
        ;   Label: core_netgame.cpp_SNetPlayer_copy_FUN_00508350
    PUSH ESI                            ; 00508351
    PUSH EDI                            ; 00508352
    MOV EAX,dword ptr [ESP + 0x10]      ; 00508353
    MOV EDX,dword ptr [ESP + 0x14]      ; 00508357
    MOV EDI,EAX                         ; 0050835b
    MOV ESI,EDX                         ; 0050835d
    MOVSD ES:EDI,ESI                    ; 0050835f
    MOVSD ES:EDI,ESI                    ; 00508360
    MOVSD ES:EDI,ESI                    ; 00508361
    MOVSD ES:EDI,ESI                    ; 00508362
    MOVSD ES:EDI,ESI                    ; 00508363
    MOV ECX,dword ptr [EDX + 0x14]      ; 00508364
    MOV dword ptr [EAX + 0x14],ECX      ; 00508367
    MOV ECX,dword ptr [EDX + 0x18]      ; 0050836a
    MOV dword ptr [EAX + 0x18],ECX      ; 0050836d
    LEA ECX,[EDX + 0x1c]                ; 00508370
    MOV EBX,dword ptr [ECX]             ; 00508373
    MOV dword ptr [EAX + 0x1c],EBX      ; 00508375
    MOV CX,word ptr [ECX + 0x4]         ; 00508378
    MOV word ptr [EAX + 0x20],CX        ; 0050837c
    MOV ECX,dword ptr [EDX + 0x24]      ; 00508380
    MOV dword ptr [EAX + 0x24],ECX      ; 00508383
    MOV ECX,dword ptr [EDX + 0x28]      ; 00508386
    MOV dword ptr [EAX + 0x28],ECX      ; 00508389
    MOV ECX,dword ptr [EDX + 0x2c]      ; 0050838c
    MOV dword ptr [EAX + 0x2c],ECX      ; 0050838f
    MOV ECX,dword ptr [EDX + 0x30]      ; 00508392
    MOV dword ptr [EAX + 0x30],ECX      ; 00508395
    MOV ECX,dword ptr [EDX + 0x34]      ; 00508398
    MOV dword ptr [EAX + 0x34],ECX      ; 0050839b
    MOV ECX,dword ptr [EDX + 0x38]      ; 0050839e
    MOV dword ptr [EAX + 0x38],ECX      ; 005083a1
    MOV ECX,dword ptr [EDX + 0x3c]      ; 005083a4
    MOV dword ptr [EAX + 0x3c],ECX      ; 005083a7
    MOV ECX,dword ptr [EDX + 0x40]      ; 005083aa
    MOV dword ptr [EAX + 0x40],ECX      ; 005083ad
    MOV ECX,dword ptr [EDX + 0x44]      ; 005083b0
    MOV dword ptr [EAX + 0x44],ECX      ; 005083b3
    MOV ECX,dword ptr [EDX + 0x48]      ; 005083b6
    MOV dword ptr [EAX + 0x48],ECX      ; 005083b9
    MOV ECX,dword ptr [EDX + 0x4c]      ; 005083bc
    MOV dword ptr [EAX + 0x4c],ECX      ; 005083bf
    MOV ECX,dword ptr [EDX + 0x50]      ; 005083c2
    MOV dword ptr [EAX + 0x50],ECX      ; 005083c5
    MOV ECX,dword ptr [EDX + 0x54]      ; 005083c8
    MOV dword ptr [EAX + 0x54],ECX      ; 005083cb
    MOV ECX,dword ptr [EDX + 0x58]      ; 005083ce
    MOV dword ptr [EAX + 0x58],ECX      ; 005083d1
    MOV ECX,dword ptr [EDX + 0x5c]      ; 005083d4
    MOV dword ptr [EAX + 0x5c],ECX      ; 005083d7
    MOV ECX,dword ptr [EDX + 0x60]      ; 005083da
    MOV dword ptr [EAX + 0x60],ECX      ; 005083dd
    MOV ECX,dword ptr [EDX + 0x64]      ; 005083e0
    MOV dword ptr [EAX + 0x64],ECX      ; 005083e3
    ADD EAX,0x1c                        ; 005083e6
    MOV ECX,dword ptr [EDX + 0x68]      ; 005083e9
    MOV dword ptr [EAX + 0x4c],ECX      ; 005083ec
    SUB EAX,0x1c                        ; 005083ef
    MOV ECX,dword ptr [EDX + 0x6c]      ; 005083f2
    MOV dword ptr [EAX + 0x6c],ECX      ; 005083f5
    ADD EAX,0x4c                        ; 005083f8
    MOV ECX,dword ptr [EDX + 0x70]      ; 005083fb
    MOV dword ptr [EAX + 0x24],ECX      ; 005083fe
    SUB EAX,0x4c                        ; 00508401
    MOV ECX,dword ptr [EDX + 0x74]      ; 00508404
    MOV dword ptr [EAX + 0x74],ECX      ; 00508407
    MOV ECX,dword ptr [EDX + 0x78]      ; 0050840a
    MOV dword ptr [EAX + 0x78],ECX      ; 0050840d
    MOV ECX,dword ptr [EDX + 0x7c]      ; 00508410
    MOV dword ptr [EAX + 0x7c],ECX      ; 00508413
    POP EDI                             ; 00508416
    POP ESI                             ; 00508417
    POP EBX                             ; 00508418
    RET                                 ; 00508419


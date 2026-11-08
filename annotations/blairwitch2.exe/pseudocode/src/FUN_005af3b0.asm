; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005af3b0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x120]:4  local_120
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0xe4]:1  local_e4
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   FUN_005afe20 at 005b006e
;
; Called Functions:
;   FUN_005916b0
;   FUN_00592830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af3b0
        ;   Label: FUN_005af3b0
    PUSH ESI                            ; 005af3b1
    PUSH EDI                            ; 005af3b2
    SUB ESP,0x138                       ; 005af3b3
    IMUL EBX,dword ptr [ESP + 0x14c],0xac ; 005af3b9
    MOV EAX,dword ptr [ESP + 0x148]     ; 005af3c4
    ADD EAX,0x37b50                     ; 005af3cb
    ADD EBX,EAX                         ; 005af3d0
    MOV ESI,dword ptr [EBX + 0x40]      ; 005af3d2
    LEA EAX,[ESI*0x4 + 0x0]             ; 005af3d5
    SUB EAX,ESI                         ; 005af3dc
    MOV ESI,EAX                         ; 005af3de
    MOV EAX,dword ptr [ESP + 0x150]     ; 005af3e0
    SHL ESI,0x4                         ; 005af3e7
    ADD EAX,0xe80                       ; 005af3ea
    ADD EAX,ESI                         ; 005af3ef
    PUSH EAX                            ; 005af3f1
    LEA ESI,[ESP + 0xf4]                ; 005af3f2
    LEA EDI,[ESP + 0xc4]                ; 005af3f9
    CALL FUN_00592830                   ; 005af400
        ;   XREF to: 00592830 (UNCONDITIONAL_CALL)  ; undefined FUN_00592830()
    MOV ECX,0xc                         ; 005af405
    ADD ESP,0x4                         ; 005af40a
    LEA EAX,[EBX + 0x48]                ; 005af40d
    LEA ESI,[ESP + 0xf0]                ; 005af410
    PUSH EAX                            ; 005af417
    LEA EAX,[ESP + 0xc4]                ; 005af418
    MOVSD.REP ES:EDI,ESI                ; 005af41f
    PUSH EAX                            ; 005af421
    LEA ESI,[ESP + 0x38]                ; 005af422
    LEA EDI,[ESP + 0x8]                 ; 005af426
    CALL FUN_005916b0                   ; 005af42a
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 005af42f
    LEA ESI,[ESP + 0x38]                ; 005af434
    ADD ESP,0x8                         ; 005af438
    MOVSD.REP ES:EDI,ESI                ; 005af43b
    MOV EAX,dword ptr [ESP]             ; 005af43d
    MOV dword ptr [EBX + 0x78],EAX      ; 005af440
    MOV EAX,dword ptr [ESP + 0x10]      ; 005af443
    MOV dword ptr [EBX + 0x7c],EAX      ; 005af447
    MOV EAX,dword ptr [ESP + 0x20]      ; 005af44a
    MOV dword ptr [EBX + 0x80],EAX      ; 005af44e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005af454
    MOV dword ptr [EBX + 0x84],EAX      ; 005af458
    MOV EAX,dword ptr [ESP + 0x14]      ; 005af45e
    MOV dword ptr [EBX + 0x88],EAX      ; 005af462
    MOV EAX,dword ptr [ESP + 0x24]      ; 005af468
    MOV dword ptr [EBX + 0x8c],EAX      ; 005af46c
    MOV EAX,dword ptr [ESP + 0x8]       ; 005af472
    MOV dword ptr [EBX + 0x90],EAX      ; 005af476
    MOV EAX,dword ptr [ESP + 0x18]      ; 005af47c
    MOV dword ptr [EBX + 0x94],EAX      ; 005af480
    MOV EAX,dword ptr [ESP + 0x28]      ; 005af486
    MOV dword ptr [EBX + 0x98],EAX      ; 005af48a
    MOV EAX,ESP                         ; 005af490
    PUSH EAX                            ; 005af492
    LEA ESI,[ESP + 0x64]                ; 005af493
    LEA EDI,[ESP + 0x94]                ; 005af497
    CALL FUN_00592830                   ; 005af49e
        ;   XREF to: 00592830 (UNCONDITIONAL_CALL)  ; undefined FUN_00592830()
    MOV ECX,0xc                         ; 005af4a3
    LEA ESI,[ESP + 0x64]                ; 005af4a8
    ADD ESP,0x4                         ; 005af4ac
    MOVSD.REP ES:EDI,ESI                ; 005af4af
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005af4b1
    ADD EBX,0xa0                        ; 005af4b8
    MOV dword ptr [ESP + 0x120],EAX     ; 005af4be
    MOV EAX,dword ptr [ESP + 0xac]      ; 005af4c5
    LEA EDI,[ESP + 0x12c]               ; 005af4cc
    MOV dword ptr [ESP + 0x124],EAX     ; 005af4d3
    MOV EAX,dword ptr [ESP + 0xbc]      ; 005af4da
    LEA ESI,[ESP + 0x120]               ; 005af4e1
    MOV dword ptr [ESP + 0x128],EAX     ; 005af4e8
    LEA EAX,[ESP + 0x12c]               ; 005af4ef
    MOVSD ES:EDI,ESI                    ; 005af4f6
    MOVSD ES:EDI,ESI                    ; 005af4f7
    MOVSD ES:EDI,ESI                    ; 005af4f8
    CMP EBX,EAX                         ; 005af4f9
    JNZ 0x005af507                      ; 005af4fb
        ;   XREF to: 005af507 (CONDITIONAL_JUMP)  ; LAB_005af507
    ADD ESP,0x138                       ; 005af4fd
    POP EDI                             ; 005af503
    POP ESI                             ; 005af504
    POP EBX                             ; 005af505
    RET                                 ; 005af506
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005af507
        ;   Label: LAB_005af507
    MOV dword ptr [EBX],EAX             ; 005af50e
    MOV EAX,dword ptr [ESP + 0x130]     ; 005af510
    MOV dword ptr [EBX + 0x4],EAX       ; 005af517
    MOV EAX,dword ptr [ESP + 0x134]     ; 005af51a
    MOV dword ptr [EBX + 0x8],EAX       ; 005af521
    ADD ESP,0x138                       ; 005af524
    POP EDI                             ; 005af52a
    POP ESI                             ; 005af52b
    POP EBX                             ; 005af52c
    RET                                 ; 005af52d


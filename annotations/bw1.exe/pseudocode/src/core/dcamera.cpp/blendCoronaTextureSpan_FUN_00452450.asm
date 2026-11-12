; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_00452450(int scanline_y,int x_start,int x_end,SCoronaLightEntry *source_entry)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; int              Stack[0x8]:4   x_start
; int              Stack[0xc]:4   x_end
; SCoronaLightEntry * Stack[0x10]:4   source_entry
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_renderGlobeCoronas_FUN_00452550 at 004527f8
;
; Referenced Globals:
;   undefined4 DAT_0152bc18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452450
        ;   Label: core_dcamera.cpp_blendCoronaTextureSpan_FUN_00452450
    PUSH ESI                            ; 00452451
    PUSH EDI                            ; 00452452
    PUSH EBP                            ; 00452453
    MOV EBP,ESP                         ; 00452454
    SUB ESP,0x10                        ; 00452456
    MOV ECX,dword ptr [EBP + 0x18]      ; 00452459
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045245c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045245f
    ADD EAX,EDX                         ; 00452466
    MOV EDX,0xb10718                    ; 00452468
    SHL EAX,0x6                         ; 0045246d
    ADD EDX,EAX                         ; 00452470
    ADD EDX,ECX                         ; 00452472
    MOV dword ptr [EBP + -0x10],EDX     ; 00452474
    MOV EDX,dword ptr [EBP + 0x20]      ; 00452477
    ADD EDX,0x784                       ; 0045247a
    ADD EAX,EDX                         ; 00452480
    ADD EAX,ECX                         ; 00452482
    MOV dword ptr [EBP + -0xc],EAX      ; 00452484
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00452487
    SUB EAX,ECX                         ; 0045248a
    MOV dword ptr [EBP + -0x8],EAX      ; 0045248c
    MOV EAX,[0x0152bc18]                ; 0045248f | DAT_0152bc18
    MOV EAX,dword ptr [EAX + 0x3c]      ; 00452494
    MOV dword ptr [EBP + -0x4],EAX      ; 00452497
    MOV ECX,dword ptr [EBP + 0xfffffff8] ; 0045249a
    MOV ESI,dword ptr [EBP + 0xfffffff4] ; 004524a0
    MOV EDI,dword ptr [EBP + 0xfffffff0] ; 004524a6
    MOV EBX,dword ptr [EBP + 0xfffffffc] ; 004524ac
    SHR EBX,0xa                         ; 004524b2
    PXOR MM7,MM7                        ; 004524b5
    MOVD MM3,EBX                        ; 004524b8
    MOVD MM4,EBX                        ; 004524bb
    MOVD MM5,EBX                        ; 004524be
    MOVD MM6,EBX                        ; 004524c1
    PSLLQ MM3,0x18                      ; 004524c4
    PSLLQ MM4,0x10                      ; 004524c8
    PSLLQ MM5,0x8                       ; 004524cc
    POR MM6,MM3                         ; 004524d0
    POR MM6,MM4                         ; 004524d3
    POR MM6,MM5                         ; 004524d6
    PUNPCKLBW MM6,MM7                   ; 004524d9
    TEST EDI,0x3                        ; 004524dc
        ;   Label: LAB_004524dc
    JZ 0x004524fb                       ; 004524e2
        ;   XREF to: 004524fb (CONDITIONAL_JUMP)  ; LAB_004524fb
    MOVZX EAX,byte ptr [ESI]            ; 004524e4
    SHL EAX,0x6                         ; 004524e7
    ADD EAX,EBX                         ; 004524ea
    MOV AL,byte ptr [EAX + 0x1341200]   ; 004524ec
    ADD byte ptr [EDI],AL               ; 004524f2
    INC ESI                             ; 004524f4
    INC EDI                             ; 004524f5
    DEC ECX                             ; 004524f6
    JG 0x004524dc                       ; 004524f7
        ;   XREF to: 004524dc (CONDITIONAL_JUMP)  ; LAB_004524dc
    JMP 0x0045253b                      ; 004524f9
        ;   XREF to: 0045253b (UNCONDITIONAL_JUMP)  ; LAB_0045253b
    SUB ECX,0x4                         ; 004524fb
        ;   Label: LAB_004524fb
    JL 0x00452521                       ; 004524fe
        ;   XREF to: 00452521 (CONDITIONAL_JUMP)  ; LAB_00452521
    MOVD MM0,dword ptr [ESI]            ; 00452500
    MOVD MM1,dword ptr [EDI]            ; 00452503
    PUNPCKLBW MM0,MM7                   ; 00452506
    PMULLW MM0,MM6                      ; 00452509
    PSRLW MM0,0x6                       ; 0045250c
    PACKUSWB MM0,MM7                    ; 00452510
    PADDW MM0,MM1                       ; 00452513
    MOVD dword ptr [EDI],MM0            ; 00452516
    ADD ESI,0x4                         ; 00452519
    ADD EDI,0x4                         ; 0045251c
    JMP 0x004524fb                      ; 0045251f
        ;   XREF to: 004524fb (UNCONDITIONAL_JUMP)  ; LAB_004524fb
    ADD ECX,0x4                         ; 00452521
        ;   Label: LAB_00452521
    JZ 0x0045253b                       ; 00452524
        ;   XREF to: 0045253b (CONDITIONAL_JUMP)  ; LAB_0045253b
    MOVZX EAX,byte ptr [ESI]            ; 00452526
        ;   Label: LAB_00452526
    SHL EAX,0x6                         ; 00452529
    ADD EAX,EBX                         ; 0045252c
    MOV AL,byte ptr [EAX + 0x1341200]   ; 0045252e
    ADD byte ptr [EDI],AL               ; 00452534
    INC ESI                             ; 00452536
    INC EDI                             ; 00452537
    DEC ECX                             ; 00452538
    JG 0x00452526                       ; 00452539
        ;   XREF to: 00452526 (CONDITIONAL_JUMP)  ; LAB_00452526
    EMMS                                ; 0045253b
        ;   Label: LAB_0045253b
    MOV ESP,EBP                         ; 0045253d
    POP EBP                             ; 0045253f
    POP EDI                             ; 00452540
    POP ESI                             ; 00452541
    POP EBX                             ; 00452542
    RET                                 ; 00452543


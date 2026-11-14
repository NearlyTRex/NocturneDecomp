; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_boxactor_cpp_FUN_004201a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ff20 at 00420086
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_box.cpp_FUN_0041ee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004201a0
        ;   Label: core_boxactor.cpp_FUN_004201a0
    SUB ESP,0x78                        ; 004201a1
    MOV EBX,dword ptr [ESP + 0x80]      ; 004201a4
    MOV EDX,dword ptr [EBX + 0x324]     ; 004201ab
    TEST EDX,EDX                        ; 004201b1
    JNZ 0x004201ba                      ; 004201b3
        ;   XREF to: 004201ba (CONDITIONAL_JUMP)  ; LAB_004201ba
    ADD ESP,0x78                        ; 004201b5
    POP EBX                             ; 004201b8
    RET                                 ; 004201b9
    PUSH EDI                            ; 004201ba
        ;   Label: LAB_004201ba
    PUSH ESI                            ; 004201bb
    LEA EAX,[EBX + 0x20]                ; 004201bc
    PUSH EAX                            ; 004201bf
    PUSH EDX                            ; 004201c0
    LEA ESI,[ESP + 0x7c]                ; 004201c1
    LEA EDI,[ESP + 0x40]                ; 004201c5
    CALL core_actor.cpp_FUN_00408bf0    ; 004201c9
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x7c]                ; 004201ce
    ADD ESP,0x8                         ; 004201d2
    LEA EAX,[ESP + 0x38]                ; 004201d5
    MOVSD ES:EDI,ESI                    ; 004201d9
    MOVSD ES:EDI,ESI                    ; 004201da
    MOVSD ES:EDI,ESI                    ; 004201db
    PUSH EAX                            ; 004201dc
    MOV EAX,dword ptr [EBX + 0x324]     ; 004201dd
    PUSH EAX                            ; 004201e3
    MOV EDX,dword ptr [EAX + 0x154]     ; 004201e4
    LEA ESI,[ESP + 0x28]                ; 004201ea
    LEA EDI,[ESP + 0x10]                ; 004201ee
    CALL dword ptr [EDX + 0x1c]         ; 004201f2
    MOV ECX,0x6                         ; 004201f5
    LEA ESI,[ESP + 0x28]                ; 004201fa
    ADD ESP,0x4                         ; 004201fe
    LEA EAX,[ESP + 0xc]                 ; 00420201
    MOVSD.REP ES:EDI,ESI                ; 00420205
    PUSH EAX                            ; 00420207
    LEA ESI,[ESP + 0x64]                ; 00420208
    LEA EDI,[ESP + 0x4c]                ; 0042020c
    CALL core_box.cpp_FUN_0041ee30      ; 00420210
        ;   XREF to: 0041ee30 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041ee30()
    LEA ESI,[ESP + 0x64]                ; 00420215
    LEA EAX,[ESP + 0x4c]                ; 00420219
    ADD ESP,0x8                         ; 0042021d
    LEA EDX,[ESP + 0x38]                ; 00420220
    MOVSD ES:EDI,ESI                    ; 00420224
    MOVSD ES:EDI,ESI                    ; 00420225
    MOVSD ES:EDI,ESI                    ; 00420226
    CMP EDX,EAX                         ; 00420227
    JZ 0x00420243                       ; 00420229
        ;   XREF to: 00420243 (CONDITIONAL_JUMP)  ; LAB_00420243
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042022b
    MOV dword ptr [ESP + 0x38],EAX      ; 0042022f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00420233
    MOV dword ptr [ESP + 0x3c],EAX      ; 00420237
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042023b
    MOV dword ptr [ESP + 0x40],EAX      ; 0042023f
    LEA EAX,[ESP + 0x38]                ; 00420243
        ;   Label: LAB_00420243
    PUSH EAX                            ; 00420247
    MOV ESI,dword ptr [EBX + 0x324]     ; 00420248
    PUSH ESI                            ; 0042024e
    LEA ESI,[ESP + 0x58]                ; 0042024f
    LEA EDI,[ESP + 0x70]                ; 00420253
    CALL core_actor.cpp_FUN_00408b80    ; 00420257
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x58]                ; 0042025c
    ADD ESP,0x8                         ; 00420260
    MOVSD ES:EDI,ESI                    ; 00420263
    MOVSD ES:EDI,ESI                    ; 00420264
    MOVSD ES:EDI,ESI                    ; 00420265
    MOV EAX,dword ptr [ESP + 0x68]      ; 00420266
    MOV dword ptr [EBX + 0x20],EAX      ; 0042026a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042026d
    MOV dword ptr [EBX + 0x24],EAX      ; 00420271
    MOV EAX,dword ptr [ESP + 0x70]      ; 00420274
    MOV dword ptr [EBX + 0x28],EAX      ; 00420278
    POP ESI                             ; 0042027b
    POP EDI                             ; 0042027c
    ADD ESP,0x78                        ; 0042027d
    POP EBX                             ; 00420280
    RET                                 ; 00420281


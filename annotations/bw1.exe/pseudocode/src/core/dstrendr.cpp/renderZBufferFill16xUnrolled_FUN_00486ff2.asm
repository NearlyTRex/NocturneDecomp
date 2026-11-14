; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __edi_esi_ebx core_dstrendr_cpp_renderZBufferFill16xUnrolled_FUN_00486ff2(SSoftwareEdge *left_edge,SSoftwareEdge *right_edge,int scanline_y)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderZPrepassPoly_FUN_00481cb0 at 00481d91
;
; Referenced Globals:
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c4e3d4
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01c4f030
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00486ff2
        ;   Label: core_dstrendr.cpp_renderZBufferFill16xUnrolled_FUN_00486ff2
    PUSH EDI                            ; 00486ff3
    PUSH EBP                            ; 00486ff4
    MOV EAX,dword ptr [ESI + 0x8]       ; 00486ff5
    MOV ECX,dword ptr [EDI + 0x8]       ; 00486ff8
    CMP EAX,ECX                         ; 00486ffb
    JBE 0x00487002                      ; 00486ffd
        ;   XREF to: 00487002 (CONDITIONAL_JUMP)  ; LAB_00487002
    XCHG EAX,ECX                        ; 00486fff
    XCHG EDI,ESI                        ; 00487000
    SHR EAX,0x10                        ; 00487002
        ;   Label: LAB_00487002
    SHR ECX,0x10                        ; 00487005
    MOV EBP,dword ptr [EBX*0x4 + 0x1c4480c] ; 00487008 | DAT_01c4480c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c4354c] ; 0048700f | DAT_01c4354c
    SUB ECX,EAX                         ; 00487016
    JLE 0x00487144                      ; 00487018
        ;   XREF to: 00487144 (CONDITIONAL_JUMP)  ; LAB_00487144
    SHL EAX,0x2                         ; 0048701e
    ADD EBX,EAX                         ; 00487021
    ADD EBP,EAX                         ; 00487023
    INC ECX                             ; 00487025
    MOV EAX,dword ptr [EDI + 0x28]      ; 00487026
    SUB EAX,dword ptr [ESI + 0x28]      ; 00487029
    IMUL dword ptr [ECX*0x4 + 0x1c4f030] ; 0048702c | DAT_01c4f030
    MOV EDI,EBX                         ; 00487033
    MOV EBX,EBP                         ; 00487035
    DEC ECX                             ; 00487037
    MOV ESI,dword ptr [ESI + 0x28]      ; 00487038
    XOR EAX,EAX                         ; 0048703b
    MOV AL,[0x01c4f020]                 ; 0048703d | DAT_01c4f020
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4e3d4] ; 00487042 | DAT_01c4e3d4
    SUB ECX,0x4                         ; 00487049
        ;   Label: LAB_00487049
    JL 0x0048711e                       ; 0048704c
        ;   XREF to: 0048711e (CONDITIONAL_JUMP)  ; LAB_0048711e
    MOV EBP,ESI                         ; 00487052
    SHR EBP,0x8                         ; 00487054
    MOV dword ptr [EBX],EBP             ; 00487057
    ADD ESI,EDX                         ; 00487059
    MOV EBP,ESI                         ; 0048705b
    SHR EBP,0x8                         ; 0048705d
    MOV dword ptr [EBX + 0x4],EBP       ; 00487060
    ADD ESI,EDX                         ; 00487063
    MOV EBP,ESI                         ; 00487065
    SHR EBP,0x8                         ; 00487067
    MOV dword ptr [EBX + 0x8],EBP       ; 0048706a
    ADD ESI,EDX                         ; 0048706d
    MOV EBP,ESI                         ; 0048706f
    SHR EBP,0x8                         ; 00487071
    MOV dword ptr [EBX + 0xc],EBP       ; 00487074
    ADD ESI,EDX                         ; 00487077
    ADD EBX,0x10                        ; 00487079
    ADD EDI,0x10                        ; 0048707c
    SUB ECX,0x4                         ; 0048707f
    JL 0x0048711e                       ; 00487082
        ;   XREF to: 0048711e (CONDITIONAL_JUMP)  ; LAB_0048711e
    MOV EBP,ESI                         ; 00487088
    SHR EBP,0x8                         ; 0048708a
    MOV dword ptr [EBX],EBP             ; 0048708d
    ADD ESI,EDX                         ; 0048708f
    MOV EBP,ESI                         ; 00487091
    SHR EBP,0x8                         ; 00487093
    MOV dword ptr [EBX + 0x4],EBP       ; 00487096
    ADD ESI,EDX                         ; 00487099
    MOV EBP,ESI                         ; 0048709b
    SHR EBP,0x8                         ; 0048709d
    MOV dword ptr [EBX + 0x8],EBP       ; 004870a0
    ADD ESI,EDX                         ; 004870a3
    MOV EBP,ESI                         ; 004870a5
    SHR EBP,0x8                         ; 004870a7
    MOV dword ptr [EBX + 0xc],EBP       ; 004870aa
    ADD ESI,EDX                         ; 004870ad
    ADD EBX,0x10                        ; 004870af
    ADD EDI,0x10                        ; 004870b2
    SUB ECX,0x4                         ; 004870b5
    JL 0x0048711e                       ; 004870b8
        ;   XREF to: 0048711e (CONDITIONAL_JUMP)  ; LAB_0048711e
    MOV EBP,ESI                         ; 004870ba
    SHR EBP,0x8                         ; 004870bc
    MOV dword ptr [EBX],EBP             ; 004870bf
    ADD ESI,EDX                         ; 004870c1
    MOV EBP,ESI                         ; 004870c3
    SHR EBP,0x8                         ; 004870c5
    MOV dword ptr [EBX + 0x4],EBP       ; 004870c8
    ADD ESI,EDX                         ; 004870cb
    MOV EBP,ESI                         ; 004870cd
    SHR EBP,0x8                         ; 004870cf
    MOV dword ptr [EBX + 0x8],EBP       ; 004870d2
    ADD ESI,EDX                         ; 004870d5
    MOV EBP,ESI                         ; 004870d7
    SHR EBP,0x8                         ; 004870d9
    MOV dword ptr [EBX + 0xc],EBP       ; 004870dc
    ADD ESI,EDX                         ; 004870df
    ADD EBX,0x10                        ; 004870e1
    ADD EDI,0x10                        ; 004870e4
    SUB ECX,0x4                         ; 004870e7
    JL 0x0048711e                       ; 004870ea
        ;   XREF to: 0048711e (CONDITIONAL_JUMP)  ; LAB_0048711e
    MOV EBP,ESI                         ; 004870ec
    SHR EBP,0x8                         ; 004870ee
    MOV dword ptr [EBX],EBP             ; 004870f1
    ADD ESI,EDX                         ; 004870f3
    MOV EBP,ESI                         ; 004870f5
    SHR EBP,0x8                         ; 004870f7
    MOV dword ptr [EBX + 0x4],EBP       ; 004870fa
    ADD ESI,EDX                         ; 004870fd
    MOV EBP,ESI                         ; 004870ff
    SHR EBP,0x8                         ; 00487101
    MOV dword ptr [EBX + 0x8],EBP       ; 00487104
    ADD ESI,EDX                         ; 00487107
    MOV EBP,ESI                         ; 00487109
    SHR EBP,0x8                         ; 0048710b
    MOV dword ptr [EBX + 0xc],EBP       ; 0048710e
    ADD ESI,EDX                         ; 00487111
    ADD EBX,0x10                        ; 00487113
    ADD EDI,0x10                        ; 00487116
    JMP 0x00487049                      ; 00487119
        ;   XREF to: 00487049 (UNCONDITIONAL_JUMP)  ; LAB_00487049
    ADD ECX,0x4                         ; 0048711e
        ;   Label: LAB_0048711e
    JLE 0x00487144                      ; 00487121
        ;   XREF to: 00487144 (CONDITIONAL_JUMP)  ; LAB_00487144
    MOV EBP,ESI                         ; 00487123
    SHR EBP,0x8                         ; 00487125
    MOV dword ptr [EBX],EBP             ; 00487128
    ADD ESI,EDX                         ; 0048712a
    DEC ECX                             ; 0048712c
    JLE 0x00487144                      ; 0048712d
        ;   XREF to: 00487144 (CONDITIONAL_JUMP)  ; LAB_00487144
    MOV EBP,ESI                         ; 0048712f
    SHR EBP,0x8                         ; 00487131
    MOV dword ptr [EBX + 0x4],EBP       ; 00487134
    ADD ESI,EDX                         ; 00487137
    DEC ECX                             ; 00487139
    JLE 0x00487144                      ; 0048713a
        ;   XREF to: 00487144 (CONDITIONAL_JUMP)  ; LAB_00487144
    MOV EBP,ESI                         ; 0048713c
    SHR EBP,0x8                         ; 0048713e
    MOV dword ptr [EBX + 0x8],EBP       ; 00487141
    POP EBP                             ; 00487144
        ;   Label: LAB_00487144
    POP EDI                             ; 00487145
    POP ESI                             ; 00487146
    RET                                 ; 00487147


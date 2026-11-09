; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_lever_cpp_FUN_004ff970(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; XREF[1]:
;   core_hero.cpp_FUN_004eb660 at 004eb782
;
; Called Functions:
;   core_actor.cpp_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff970
        ;   Label: core_lever.cpp_FUN_004ff970
    PUSH ESI                            ; 004ff971
    PUSH EDI                            ; 004ff972
    PUSH EBP                            ; 004ff973
    MOV EBP,ESP                         ; 004ff974
    SUB ESP,0x18                        ; 004ff976
    AND ESP,0xfffffff8                  ; 004ff979
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ff97c
    CMP dword ptr [EBX + 0x80c],0x2     ; 004ff97f
    JNZ 0x004ff994                      ; 004ff986
        ;   XREF to: 004ff994 (CONDITIONAL_JUMP)  ; LAB_004ff994
    MOV EAX,0x1                         ; 004ff988
        ;   Label: LAB_004ff988
    MOV ESP,EBP                         ; 004ff98d
    POP EBP                             ; 004ff98f
    POP EDI                             ; 004ff990
    POP ESI                             ; 004ff991
    POP EBX                             ; 004ff992
    RET                                 ; 004ff993
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ff994
        ;   Label: LAB_004ff994
    PUSH ECX                            ; 004ff997
    PUSH EBX                            ; 004ff998
    LEA ESI,[ESP + 0x14]                ; 004ff999
    LEA EDI,[ESP + 0x8]                 ; 004ff99d
    CALL core_actor.cpp_FUN_00408bb0    ; 004ff9a1
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x14]                ; 004ff9a6
    ADD ESP,0x8                         ; 004ff9aa
    MOVSD ES:EDI,ESI                    ; 004ff9ad
    MOVSD ES:EDI,ESI                    ; 004ff9ae
    MOVSD ES:EDI,ESI                    ; 004ff9af
    CMP dword ptr [EBX + 0x80c],0x0     ; 004ff9b0
    JNZ 0x004ff9c6                      ; 004ff9b7
        ;   XREF to: 004ff9c6 (CONDITIONAL_JUMP)  ; LAB_004ff9c6
    FLD float ptr [ESP + 0x8]           ; 004ff9b9
    FLDZ                                ; 004ff9bd
    FCOMPP                              ; 004ff9bf
    FNSTSW AX                           ; 004ff9c1
    SAHF                                ; 004ff9c3
    JC 0x004ff988                       ; 004ff9c4
        ;   XREF to: 004ff988 (CONDITIONAL_JUMP)  ; LAB_004ff988
    MOV EDI,dword ptr [EBX + 0x80c]     ; 004ff9c6
        ;   Label: LAB_004ff9c6
    CMP EDI,0x1                         ; 004ff9cc
    JNZ 0x004ff9e7                      ; 004ff9cf
        ;   XREF to: 004ff9e7 (CONDITIONAL_JUMP)  ; LAB_004ff9e7
    FLD float ptr [ESP + 0x8]           ; 004ff9d1
    FLDZ                                ; 004ff9d5
    FCOMPP                              ; 004ff9d7
    FNSTSW AX                           ; 004ff9d9
    SAHF                                ; 004ff9db
    JBE 0x004ff9e7                      ; 004ff9dc
        ;   XREF to: 004ff9e7 (CONDITIONAL_JUMP)  ; LAB_004ff9e7
    MOV EAX,EDI                         ; 004ff9de
    MOV ESP,EBP                         ; 004ff9e0
    POP EBP                             ; 004ff9e2
    POP EDI                             ; 004ff9e3
    POP ESI                             ; 004ff9e4
    POP EBX                             ; 004ff9e5
    RET                                 ; 004ff9e6
    XOR EAX,EAX                         ; 004ff9e7
        ;   Label: LAB_004ff9e7
    MOV ESP,EBP                         ; 004ff9e9
    POP EBP                             ; 004ff9eb
    POP EDI                             ; 004ff9ec
    POP ESI                             ; 004ff9ed
    POP EBX                             ; 004ff9ee
    RET                                 ; 004ff9ef


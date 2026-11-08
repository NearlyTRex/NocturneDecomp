; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ce050(float *param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_0042abe0 at 0042ac9d
;   FUN_00486a80 at 00486a9b
;
; Referenced Globals:
;   TerminatedCString s_core_hero_cpp_005d9a13
;   TerminatedCString s_closestHeroToPoint_no_he_005d9a24
;   undefined4 DAT_01cedee0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce050
        ;   Label: FUN_004ce050
    PUSH ESI                            ; 004ce051
    PUSH EDI                            ; 004ce052
    PUSH EBP                            ; 004ce053
    SUB ESP,0x14                        ; 004ce054
    MOV EBX,dword ptr [ESP + 0x28]      ; 004ce057
    MOV EDX,0x7149f2ca                  ; 004ce05b
    MOV ECX,dword ptr [0x01cedee0]      ; 004ce060 | DAT_01cedee0
    XOR ESI,ESI                         ; 004ce066
    MOV dword ptr [ESP + 0x8],EDX       ; 004ce068
    TEST ECX,ECX                        ; 004ce06c
    JLE 0x004ce08a                      ; 004ce06e
        ;   XREF to: 004ce08a (CONDITIONAL_JUMP)  ; LAB_004ce08a
    LEA EDI,[ECX*0x4 + 0x0]             ; 004ce070
    XOR EDX,EDX                         ; 004ce077
    MOV EBP,dword ptr [EDX + 0x1cedee4] ; 004ce079
        ;   Label: LAB_004ce079
    TEST EBP,EBP                        ; 004ce07f
    JNZ 0x004ce098                      ; 004ce081
        ;   XREF to: 004ce098 (CONDITIONAL_JUMP)  ; LAB_004ce098
    ADD EDX,0x4                         ; 004ce083
        ;   Label: LAB_004ce083
    CMP EDX,EDI                         ; 004ce086
    JL 0x004ce079                       ; 004ce088
        ;   XREF to: 004ce079 (CONDITIONAL_JUMP)  ; LAB_004ce079
    TEST ESI,ESI                        ; 004ce08a
        ;   Label: LAB_004ce08a
    JZ 0x004ce0d2                       ; 004ce08c
        ;   XREF to: 004ce0d2 (CONDITIONAL_JUMP)  ; LAB_004ce0d2
    MOV EAX,ESI                         ; 004ce08e
    ADD ESP,0x14                        ; 004ce090
    POP EBP                             ; 004ce093
    POP EDI                             ; 004ce094
    POP ESI                             ; 004ce095
    POP EBX                             ; 004ce096
    RET                                 ; 004ce097
    MOV ECX,EBP                         ; 004ce098
        ;   Label: LAB_004ce098
    LEA EAX,[EBP + 0x20]                ; 004ce09a
    FLD float ptr [EAX]                 ; 004ce09d
    FSUB float ptr [EBX]                ; 004ce09f
    FMUL ST0                            ; 004ce0a1
    FLD float ptr [EAX + 0x4]           ; 004ce0a3
    FSUB float ptr [EBX + 0x4]          ; 004ce0a6
    FMUL ST0                            ; 004ce0a9
    FLD float ptr [EAX + 0x8]           ; 004ce0ab
    FXCH                                ; 004ce0ae
    FADDP ST2,ST0                       ; 004ce0b0
    FSUB float ptr [EBX + 0x8]          ; 004ce0b2
    FMUL ST0                            ; 004ce0b5
    FADDP                               ; 004ce0b7
    FST float ptr [ESP + 0xc]           ; 004ce0b9
    FCOMP float ptr [ESP + 0x8]         ; 004ce0bd
    FNSTSW AX                           ; 004ce0c1
    SAHF                                ; 004ce0c3
    JNC 0x004ce083                      ; 004ce0c4
        ;   XREF to: 004ce083 (CONDITIONAL_JUMP)  ; LAB_004ce083
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ce0c6
    MOV ESI,EBP                         ; 004ce0ca
    MOV dword ptr [ESP + 0x8],EAX       ; 004ce0cc
    JMP 0x004ce083                      ; 004ce0d0
        ;   XREF to: 004ce083 (UNCONDITIONAL_JUMP)  ; LAB_004ce083
    MOV EBX,0x5d9a13                    ; 004ce0d2 | = "..\\core\\hero.cpp"
        ;   Label: LAB_004ce0d2
    MOV EDI,0x3a                        ; 004ce0d7
    PUSH 0x5d9a24                       ; 004ce0dc | = "closestHeroToPoint - no heros!"
    MOV dword ptr [0x01d046a0],EBX      ; 004ce0e1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004ce0e7 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004ce0ed
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004ce0f2
    MOV EAX,ESI                         ; 004ce0f5
    ADD ESP,0x14                        ; 004ce0f7
    POP EBP                             ; 004ce0fa
    POP EDI                             ; 004ce0fb
    POP ESI                             ; 004ce0fc
    POP EBX                             ; 004ce0fd
    RET                                 ; 004ce0fe


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_SNotesMap_revealAtHero_FUN_004aa0b0(SNotesMap *this_ptr)
;
; Parameters:
; SNotesMap *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_fldnotes.cpp_CFieldNotes_process_FUN_004ac6b0 at 004ac6c5
;
; Referenced Globals:
;   undefined4 DAT_005c114f
;   undefined4 DAT_005c1157
;   undefined4 DAT_01d5ba14
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_revealCircle_FUN_004aa200
;   core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004aa350
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa0b0
        ;   Label: core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004aa0b0
    PUSH EBP                            ; 004aa0b1
    SUB ESP,0x14                        ; 004aa0b2
    MOV EBX,dword ptr [ESP + 0x20]      ; 004aa0b5
    MOV EAX,[0x01d5ba14]                ; 004aa0b9 | DAT_01d5ba14
    SHL EAX,0x2                         ; 004aa0be
    CMP dword ptr [EAX + 0x1d5ba04],0x0 ; 004aa0c1
    JZ 0x004aa0d9                       ; 004aa0c8
        ;   XREF to: 004aa0d9 (CONDITIONAL_JUMP)  ; LAB_004aa0d9
    MOV ECX,dword ptr [EBX]             ; 004aa0ca
    TEST ECX,ECX                        ; 004aa0cc
    JZ 0x004aa0d9                       ; 004aa0ce
        ;   XREF to: 004aa0d9 (CONDITIONAL_JUMP)  ; LAB_004aa0d9
    CMP dword ptr [ECX + 0x140],0x6     ; 004aa0d0
    JZ 0x004aa0df                       ; 004aa0d7
        ;   XREF to: 004aa0df (CONDITIONAL_JUMP)  ; LAB_004aa0df
    ADD ESP,0x14                        ; 004aa0d9
        ;   Label: LAB_004aa0d9
    POP EBP                             ; 004aa0dc
    POP EBX                             ; 004aa0dd
    RET                                 ; 004aa0de
    LEA EDX,[ESP + 0x8]                 ; 004aa0df
        ;   Label: LAB_004aa0df
    PUSH EDX                            ; 004aa0e3
    LEA EDX,[ESP + 0x10]                ; 004aa0e4
    MOV EAX,dword ptr [EAX + 0x1d5ba04] ; 004aa0e8
    PUSH EDX                            ; 004aa0ee
    ADD EAX,0x20                        ; 004aa0ef
    PUSH EAX                            ; 004aa0f2
    PUSH EBX                            ; 004aa0f3
    CALL core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004aa350 ; 004aa0f4
        ;   XREF to: 004aa350 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SNotesMap_worldToMap_FUN_004aa350(SNotesMap * this_ptr, CLocation * location, int * map_x, int * map_y)
    ADD ESP,0x10                        ; 004aa0f9
    TEST EAX,EAX                        ; 004aa0fc
    JL 0x004aa0d9                       ; 004aa0fe
        ;   XREF to: 004aa0d9 (CONDITIONAL_JUMP)  ; LAB_004aa0d9
    MOV EDX,EAX                         ; 004aa100
    SHL EAX,0x4                         ; 004aa102
    ADD EAX,EDX                         ; 004aa105
    FLD float ptr [EBX + EAX*0x8 + 0x124] ; 004aa107
    FMUL double ptr [0x005c114f]        ; 004aa10e | DAT_005c114f
    SUB ESP,0x8                         ; 004aa114
    FSTP double ptr [ESP]               ; 004aa117
    CALL crt_math.c_floor_FUN_005a3600  ; 004aa11a
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 004aa11f
    MOV dword ptr [ESP + 0xc],EDX       ; 004aa123
    FLD double ptr [ESP + 0x8]          ; 004aa127
    FADD double ptr [0x005c1157]        ; 004aa12b | DAT_005c1157
    ADD ESP,0x8                         ; 004aa131
    CALL crt_math.c_round_FUN_005a3120  ; 004aa134
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x10]        ; 004aa139
    CMP dword ptr [ESP + 0x10],0x1      ; 004aa13d
    JGE 0x004aa14c                      ; 004aa142
        ;   XREF to: 004aa14c (CONDITIONAL_JUMP)  ; LAB_004aa14c
    MOV dword ptr [ESP + 0x10],0x1      ; 004aa144
    PUSH EDI                            ; 004aa14c
        ;   Label: LAB_004aa14c
    PUSH ESI                            ; 004aa14d
    MOV EDX,dword ptr [ESP + 0x10]      ; 004aa14e
    IMUL EDX,dword ptr [EBX + 0x98]     ; 004aa152
    MOV EAX,dword ptr [ESP + 0x18]      ; 004aa159
    MOV ESI,dword ptr [EBX + 0x6c]      ; 004aa15d
    PUSH EAX                            ; 004aa160
    MOV EAX,EDX                         ; 004aa161
    SAR EDX,0x1f                        ; 004aa163
    IDIV ESI                            ; 004aa166
    MOV EDI,dword ptr [EBX + 0x94]      ; 004aa168
    MOV EDX,dword ptr [ESP + 0x18]      ; 004aa16e
    IMUL EDX,EDI                        ; 004aa172
    MOV EBP,dword ptr [EBX + 0x68]      ; 004aa175
    PUSH EAX                            ; 004aa178
    MOV EAX,EDX                         ; 004aa179
    SAR EDX,0x1f                        ; 004aa17b
    IDIV EBP                            ; 004aa17e
    PUSH EAX                            ; 004aa180
    PUSH EBX                            ; 004aa181
    CALL core_fldnotes.cpp_SNotesMap_revealCircle_FUN_004aa200 ; 004aa182
        ;   XREF to: 004aa200 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_revealCircle_FUN_004aa200(SNotesMap * this_ptr, int x, int y, int radius)
    ADD ESP,0x10                        ; 004aa187
    POP ESI                             ; 004aa18a
    POP EDI                             ; 004aa18b
    ADD ESP,0x14                        ; 004aa18c
    POP EBP                             ; 004aa18f
    POP EBX                             ; 004aa190
    RET                                 ; 004aa191


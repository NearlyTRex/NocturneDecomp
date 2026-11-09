; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_FUN_004cf890(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_hero.cpp_FUN_004d0780 at 004d089e
;   core_stranger.cpp_FUN_0056e4d0 at 0056e77f
;
; Referenced Globals:
;   undefined4 DAT_005d9d1c
;   undefined4 DAT_005d9d24
;   undefined4 DAT_005d9d2c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_0040d0c0
;   core_vecdir.cpp_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf890
        ;   Label: core_hero.cpp_FUN_004cf890
    PUSH ESI                            ; 004cf891
    PUSH EDI                            ; 004cf892
    PUSH EBP                            ; 004cf893
    MOV EBP,ESP                         ; 004cf894
    SUB ESP,0xa4                        ; 004cf896
    AND ESP,0xfffffff8                  ; 004cf89c
    XOR EDX,EDX                         ; 004cf89f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf8a1
    MOV dword ptr [ESP + 0x94],EDX      ; 004cf8a4
    ADD EAX,0x20                        ; 004cf8ab
    MOV dword ptr [ESP + 0x98],EDX      ; 004cf8ae
    MOV dword ptr [ESP + 0x9c],EAX      ; 004cf8b5
    MOV EAX,[0x0061b5a8]                ; 004cf8bc | g_CDemonSetPtr
        ;   Label: LAB_004cf8bc
    MOV EBX,dword ptr [ESP + 0x94]      ; 004cf8c1
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004cf8c8 | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x004cfab8                      ; 004cf8ce
        ;   XREF to: 004cfab8 (CONDITIONAL_JUMP)  ; LAB_004cfab8
    ADD EAX,dword ptr [ESP + 0x98]      ; 004cf8d4
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004cf8db | g_CDemonSetInstance.field1364328_0x14d168
    LEA EAX,[EBX + 0x20]                ; 004cf8e1
    MOV ESI,dword ptr [ESP + 0x9c]      ; 004cf8e4
    LEA EDI,[ESP + 0x44]                ; 004cf8eb
    FLD float ptr [EAX]                 ; 004cf8ef
    FLD float ptr [EAX + 0x4]           ; 004cf8f1
    FLD float ptr [EAX + 0x8]           ; 004cf8f4
    FXCH ST2                            ; 004cf8f7
    FSUB float ptr [ESI]                ; 004cf8f9
    FXCH                                ; 004cf8fb
    FSUB float ptr [ESI + 0x4]          ; 004cf8fd
    FXCH ST2                            ; 004cf900
    FSUB float ptr [ESI + 0x8]          ; 004cf902
    FXCH                                ; 004cf905
    FSTP float ptr [ESP + 0x20]         ; 004cf907
    FXCH                                ; 004cf90b
    FSTP float ptr [ESP + 0x24]         ; 004cf90d
    LEA ESI,[ESP + 0x20]                ; 004cf911
    FSTP float ptr [ESP + 0x28]         ; 004cf915
    MOVSD ES:EDI,ESI                    ; 004cf919
    MOVSD ES:EDI,ESI                    ; 004cf91a
    MOVSD ES:EDI,ESI                    ; 004cf91b
    FLD float ptr [ESP + 0x48]          ; 004cf91c
    FABS                                ; 004cf920
    FCOMP double ptr [0x005d9d1c]       ; 004cf922 | DAT_005d9d1c
    FNSTSW AX                           ; 004cf928
    SAHF                                ; 004cf92a
    JBE 0x004cf952                      ; 004cf92b
        ;   XREF to: 004cf952 (CONDITIONAL_JUMP)  ; LAB_004cf952
    MOV EBX,dword ptr [ESP + 0x94]      ; 004cf92d
        ;   Label: LAB_004cf92d
    MOV ECX,dword ptr [ESP + 0x98]      ; 004cf934
    INC EBX                             ; 004cf93b
    ADD ECX,0x4                         ; 004cf93c
    MOV dword ptr [ESP + 0x94],EBX      ; 004cf93f
    MOV dword ptr [ESP + 0x98],ECX      ; 004cf946
    JMP 0x004cf8bc                      ; 004cf94d
        ;   XREF to: 004cf8bc (UNCONDITIONAL_JUMP)  ; LAB_004cf8bc
    FLD float ptr [ESP + 0x44]          ; 004cf952
        ;   Label: LAB_004cf952
    FMUL ST0                            ; 004cf956
    FLD float ptr [ESP + 0x4c]          ; 004cf958
    FMUL ST0                            ; 004cf95c
    XOR EAX,EAX                         ; 004cf95e
    FADDP                               ; 004cf960
    MOV dword ptr [ESP + 0x48],EAX      ; 004cf962
    FSQRT                               ; 004cf966
    FCOMP double ptr [0x005d9d1c]       ; 004cf968 | DAT_005d9d1c
    FNSTSW AX                           ; 004cf96e
    SAHF                                ; 004cf970
    JA 0x004cf92d                       ; 004cf971
        ;   XREF to: 004cf92d (CONDITIONAL_JUMP)  ; LAB_004cf92d
    CMP EBX,dword ptr [EBP + 0x14]      ; 004cf973
    JZ 0x004cf92d                       ; 004cf976
        ;   XREF to: 004cf92d (CONDITIONAL_JUMP)  ; LAB_004cf92d
    LEA EAX,[ESP + 0x44]                ; 004cf978
    PUSH EAX                            ; 004cf97c
    LEA ESI,[ESP + 0x6c]                ; 004cf97d
    LEA EDI,[ESP + 0x60]                ; 004cf981
    CALL core_vecdir.cpp_FUN_005838f0   ; 004cf985
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x6c]                ; 004cf98a
    ADD ESP,0x4                         ; 004cf98e
    MOVSD ES:EDI,ESI                    ; 004cf991
    MOVSD ES:EDI,ESI                    ; 004cf992
    MOVSD ES:EDI,ESI                    ; 004cf993
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cf994
    FLD float ptr [ESP + 0x60]          ; 004cf997
    FSUB float ptr [EAX + 0x34]         ; 004cf99b
    SUB ESP,0x4                         ; 004cf99e
    FSTP float ptr [ESP]                ; 004cf9a1
    CALL core_actor.cpp_FUN_0040d0c0    ; 004cf9a4
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0xa4],EAX      ; 004cf9a9
    FLD float ptr [ESP + 0xa4]          ; 004cf9b0
    FABS                                ; 004cf9b7
    ADD ESP,0x4                         ; 004cf9b9
    FCOMP double ptr [0x005d9d24]       ; 004cf9bc | DAT_005d9d24
    FNSTSW AX                           ; 004cf9c2
    SAHF                                ; 004cf9c4
    JA 0x004cf92d                       ; 004cf9c5
        ;   XREF to: 004cf92d (CONDITIONAL_JUMP)  ; LAB_004cf92d
    MOV ECX,dword ptr [ESP + 0x9c]      ; 004cf9cb
    PUSH ECX                            ; 004cf9d2
    PUSH EBX                            ; 004cf9d3
    LEA ESI,[ESP + 0x34]                ; 004cf9d4
    LEA EDI,[ESP + 0x7c]                ; 004cf9d8
    CALL core_actor.cpp_FUN_00408de0    ; 004cf9dc
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x34]                ; 004cf9e1
    ADD ESP,0x8                         ; 004cf9e5
    MOVSD ES:EDI,ESI                    ; 004cf9e8
    MOVSD ES:EDI,ESI                    ; 004cf9e9
    MOVSD ES:EDI,ESI                    ; 004cf9ea
    FLD float ptr [ESP + 0x7c]          ; 004cf9eb
    FLDZ                                ; 004cf9ef
    FCOMPP                              ; 004cf9f1
    FNSTSW AX                           ; 004cf9f3
    SAHF                                ; 004cf9f5
    JC 0x004cf92d                       ; 004cf9f6
        ;   XREF to: 004cf92d (CONDITIONAL_JUMP)  ; LAB_004cf92d
    MOV EAX,ESP                         ; 004cf9fc
    PUSH EAX                            ; 004cf9fe
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 004cf9ff
    PUSH EBX                            ; 004cfa05
    CALL dword ptr [ESI + 0xa0]         ; 004cfa06
    ADD ESP,0x8                         ; 004cfa0c
    CMP dword ptr [ESP],0x0             ; 004cfa0f
    JZ 0x004cf92d                       ; 004cfa13
        ;   XREF to: 004cf92d (CONDITIONAL_JUMP)  ; LAB_004cf92d
    MOV EDI,dword ptr [ESP + 0x4]       ; 004cfa19
    TEST EDI,EDI                        ; 004cfa1d
    JNZ 0x004cf92d                      ; 004cfa1f
        ;   XREF to: 004cf92d (CONDITIONAL_JUMP)  ; LAB_004cf92d
    MOV EAX,dword ptr [ESP + 0x8]       ; 004cfa25
    MOV dword ptr [ESP + 0x88],EAX      ; 004cfa29
    LEA EAX,[ESP + 0x80]                ; 004cfa30
    PUSH EAX                            ; 004cfa37
    LEA ESI,[ESP + 0x3c]                ; 004cfa38
    MOV dword ptr [ESP + 0x84],EDI      ; 004cfa3c
    PUSH EBX                            ; 004cfa43
    MOV dword ptr [ESP + 0x8c],EDI      ; 004cfa44
    LEA EDI,[ESP + 0x58]                ; 004cfa4b
    CALL core_actor.cpp_FUN_00408d70    ; 004cfa4f
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x40]                ; 004cfa54
    ADD ESP,0x8                         ; 004cfa58
    MOVSD ES:EDI,ESI                    ; 004cfa5b
    MOVSD ES:EDI,ESI                    ; 004cfa5c
    MOVSD ES:EDI,ESI                    ; 004cfa5d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004cfa5e
    FLD float ptr [ESP + 0x50]          ; 004cfa65
    FSUB float ptr [EAX]                ; 004cfa69
    FMUL ST0                            ; 004cfa6b
    FLD float ptr [ESP + 0x58]          ; 004cfa6d
    FSUB float ptr [EAX + 0x8]          ; 004cfa71
    FMUL ST0                            ; 004cfa74
    FADDP                               ; 004cfa76
    FSQRT                               ; 004cfa78
    FCOMP double ptr [0x005d9d2c]       ; 004cfa7a | DAT_005d9d2c
    FNSTSW AX                           ; 004cfa80
    SAHF                                ; 004cfa82
    JA 0x004cf92d                       ; 004cfa83
        ;   XREF to: 004cf92d (CONDITIONAL_JUMP)  ; LAB_004cf92d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004cfa89
    MOV dword ptr [EAX + 0x25600],0x0   ; 004cfa8c
    MOV dword ptr [EAX + 0x255f0],0x9   ; 004cfa96
    MOV dword ptr [EAX + 0x255f4],EBX   ; 004cfaa0
    MOV dword ptr [EAX + 0x255f8],EBX   ; 004cfaa6
    MOV EAX,0x1                         ; 004cfaac
    MOV ESP,EBP                         ; 004cfab1
    POP EBP                             ; 004cfab3
    POP EDI                             ; 004cfab4
    POP ESI                             ; 004cfab5
    POP EBX                             ; 004cfab6
    RET                                 ; 004cfab7
    XOR EAX,EAX                         ; 004cfab8
        ;   Label: LAB_004cfab8
    MOV ESP,EBP                         ; 004cfaba
    POP EBP                             ; 004cfabc
    POP EDI                             ; 004cfabd
    POP ESI                             ; 004cfabe
    POP EBX                             ; 004cfabf
    RET                                 ; 004cfac0


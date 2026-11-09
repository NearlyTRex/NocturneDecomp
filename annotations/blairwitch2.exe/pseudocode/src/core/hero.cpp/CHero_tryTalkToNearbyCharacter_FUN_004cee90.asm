; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_colonel.cpp_FUN_00435830 at 00435ca7
;   core_gabriela.cpp_FUN_004ad640 at 004ae93d
;   core_haystack.cpp_FUN_004cc990 at 004cce39
;   core_hero.cpp_FUN_004d0780 at 004d07d7
;   core_icepick.cpp_FUN_004d4c50 at 004d521e
;   core_stranger.cpp_FUN_0056e4d0 at 0056e6a7
;   core_svetlana.cpp_FUN_00570510 at 00570aa3
;
; Referenced Globals:
;   undefined4 DAT_005d9c6c
;   undefined4 DAT_005d9c74
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.field1372328_0x14f0a8
;
; Called Functions:
;   core_actor.cpp_FUN_00408d30
;   core_actor.cpp_FUN_00408d70
;   core_vecdir.cpp_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cee90
        ;   Label: core_hero.cpp_CHero_tryTalkToNearbyCharacter_FUN_004cee90
    PUSH ESI                            ; 004cee91
    PUSH EDI                            ; 004cee92
    PUSH EBP                            ; 004cee93
    MOV EBP,ESP                         ; 004cee94
    SUB ESP,0x78                        ; 004cee96
    AND ESP,0xfffffff8                  ; 004cee99
    MOV EBX,dword ptr [EBP + 0x14]      ; 004cee9c
    MOV ESI,0x3fc00000                  ; 004cee9f
    LEA EAX,[ESP + 0x24]                ; 004ceea4
    MOV EDI,0x40a00000                  ; 004ceea8
    XOR EDX,EDX                         ; 004ceead
    PUSH EAX                            ; 004ceeaf
    MOV dword ptr [ESP + 0x28],EDX      ; 004ceeb0
    MOV dword ptr [ESP + 0x30],ESI      ; 004ceeb4
    PUSH EBX                            ; 004ceeb8
    LEA ESI,[ESP + 0x50]                ; 004ceeb9
    MOV dword ptr [ESP + 0x30],EDX      ; 004ceebd
    CALL core_actor.cpp_FUN_00408d70    ; 004ceec1
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004ceec6
    XOR EAX,EAX                         ; 004ceec9
    XOR EDX,EDX                         ; 004ceecb
    MOV dword ptr [ESP + 0x60],EDI      ; 004ceecd
    MOV dword ptr [ESP + 0x70],EAX      ; 004ceed1
    LEA EAX,[EBX + 0x20]                ; 004ceed5
    MOV dword ptr [ESP + 0x6c],EDX      ; 004ceed8
    MOV dword ptr [ESP + 0x68],EAX      ; 004ceedc
    MOV EAX,[0x0061b5a8]                ; 004ceee0 | g_CDemonSetPtr
        ;   Label: LAB_004ceee0
    MOV ESI,dword ptr [ESP + 0x70]      ; 004ceee5
    CMP ESI,dword ptr [EAX + 0x14f0a8]  ; 004ceee9 | g_CDemonSetInstance.field1372328_0x14f0a8
    JGE 0x004cf014                      ; 004ceeef
        ;   XREF to: 004cf014 (CONDITIONAL_JUMP)  ; LAB_004cf014
    ADD EAX,dword ptr [ESP + 0x6c]      ; 004ceef5
    MOV EAX,dword ptr [EAX + 0x14f0ac]  ; 004ceef9
    MOV DL,byte ptr [EAX + 0x2708]      ; 004ceeff
    MOV dword ptr [ESP + 0x74],EAX      ; 004cef05
    TEST DL,DL                          ; 004cef09
    JNZ 0x004cef23                      ; 004cef0b
        ;   XREF to: 004cef23 (CONDITIONAL_JUMP)  ; LAB_004cef23
    MOV ECX,dword ptr [ESP + 0x70]      ; 004cef0d
        ;   Label: LAB_004cef0d
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004cef11
    INC ECX                             ; 004cef15
    ADD EDX,0x4                         ; 004cef16
    MOV dword ptr [ESP + 0x70],ECX      ; 004cef19
    MOV dword ptr [ESP + 0x6c],EDX      ; 004cef1d
    JMP 0x004ceee0                      ; 004cef21
        ;   XREF to: 004ceee0 (UNCONDITIONAL_JUMP)  ; LAB_004ceee0
    CMP EBX,EAX                         ; 004cef23
        ;   Label: LAB_004cef23
    JZ 0x004cef0d                       ; 004cef25
        ;   XREF to: 004cef0d (CONDITIONAL_JUMP)  ; LAB_004cef0d
    FLD float ptr [EAX + 0x20]          ; 004cef27
    FLD float ptr [EAX + 0x24]          ; 004cef2a
    MOV ESI,dword ptr [ESP + 0x68]      ; 004cef2d
    FLD float ptr [EAX + 0x28]          ; 004cef31
    LEA EDI,[ESP + 0xc]                 ; 004cef34
    FXCH ST2                            ; 004cef38
    FSUB float ptr [ESI]                ; 004cef3a
    FXCH                                ; 004cef3c
    FSUB float ptr [ESI + 0x4]          ; 004cef3e
    FXCH ST2                            ; 004cef41
    FSUB float ptr [ESI + 0x8]          ; 004cef43
    FXCH                                ; 004cef46
    FSTP float ptr [ESP + 0x18]         ; 004cef48
    FXCH                                ; 004cef4c
    FSTP float ptr [ESP + 0x1c]         ; 004cef4e
    LEA ESI,[ESP + 0x18]                ; 004cef52
    FSTP float ptr [ESP + 0x20]         ; 004cef56
    MOVSD ES:EDI,ESI                    ; 004cef5a
    MOVSD ES:EDI,ESI                    ; 004cef5b
    MOVSD ES:EDI,ESI                    ; 004cef5c
    FLD float ptr [ESP + 0x10]          ; 004cef5d
    FABS                                ; 004cef61
    FCOMP double ptr [0x005d9c6c]       ; 004cef63 | DAT_005d9c6c
    FNSTSW AX                           ; 004cef69
    SAHF                                ; 004cef6b
    JA 0x004cef0d                       ; 004cef6c
        ;   XREF to: 004cef0d (CONDITIONAL_JUMP)  ; LAB_004cef0d
    FLD float ptr [ESP + 0xc]           ; 004cef6e
    FMUL ST0                            ; 004cef72
    FLD float ptr [ESP + 0x14]          ; 004cef74
    FMUL ST0                            ; 004cef78
    XOR EAX,EAX                         ; 004cef7a
    FADDP                               ; 004cef7c
    MOV dword ptr [ESP + 0x10],EAX      ; 004cef7e
    FSQRT                               ; 004cef82
    FST float ptr [ESP + 0x64]          ; 004cef84
    FCOMP float ptr [ESP + 0x60]        ; 004cef88
    FNSTSW AX                           ; 004cef8c
    SAHF                                ; 004cef8e
    JNC 0x004cef0d                      ; 004cef8f
        ;   XREF to: 004cef0d (CONDITIONAL_JUMP)  ; LAB_004cef0d
    LEA EAX,[ESP + 0xc]                 ; 004cef95
    PUSH EAX                            ; 004cef99
    PUSH EBX                            ; 004cef9a
    LEA ESI,[ESP + 0x38]                ; 004cef9b
    LEA EDI,[ESP + 0x44]                ; 004cef9f
    CALL core_actor.cpp_FUN_00408d30    ; 004cefa3
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d30()
    LEA ESI,[ESP + 0x38]                ; 004cefa8
    ADD ESP,0x8                         ; 004cefac
    LEA EAX,[ESP + 0x3c]                ; 004cefaf
    MOVSD ES:EDI,ESI                    ; 004cefb3
    MOVSD ES:EDI,ESI                    ; 004cefb4
    MOVSD ES:EDI,ESI                    ; 004cefb5
    PUSH EAX                            ; 004cefb6
    LEA ESI,[ESP + 0x4]                 ; 004cefb7
    LEA EDI,[ESP + 0x58]                ; 004cefbb
    CALL core_vecdir.cpp_FUN_005838f0   ; 004cefbf
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x4]                 ; 004cefc4
    ADD ESP,0x4                         ; 004cefc8
    MOVSD ES:EDI,ESI                    ; 004cefcb
    MOVSD ES:EDI,ESI                    ; 004cefcc
    MOVSD ES:EDI,ESI                    ; 004cefcd
    FLD float ptr [ESP + 0x58]          ; 004cefce
    FABS                                ; 004cefd2
    FCOMP double ptr [0x005d9c74]       ; 004cefd4 | DAT_005d9c74
    FNSTSW AX                           ; 004cefda
    SAHF                                ; 004cefdc
    JA 0x004cef0d                       ; 004cefdd
        ;   XREF to: 004cef0d (CONDITIONAL_JUMP)  ; LAB_004cef0d
    MOV EAX,dword ptr [ESP + 0x74]      ; 004cefe3
    MOV dword ptr [EBX + 0x25600],0x0   ; 004cefe7
    MOV dword ptr [EBX + 0x255f4],EAX   ; 004ceff1
    MOV dword ptr [EBX + 0x255f8],EAX   ; 004ceff7
    MOV EAX,dword ptr [ESP + 0x64]      ; 004ceffd
    MOV dword ptr [EBX + 0x255f0],0x2   ; 004cf001
    MOV dword ptr [ESP + 0x60],EAX      ; 004cf00b
    JMP 0x004cef0d                      ; 004cf00f
        ;   XREF to: 004cef0d (UNCONDITIONAL_JUMP)  ; LAB_004cef0d
    CMP dword ptr [EBX + 0x255f0],0x2   ; 004cf014
        ;   Label: LAB_004cf014
    SETZ AL                             ; 004cf01b
    AND EAX,0xff                        ; 004cf01e
    MOV ESP,EBP                         ; 004cf023
    POP EBP                             ; 004cf025
    POP EDI                             ; 004cf026
    POP ESI                             ; 004cf027
    POP EBX                             ; 004cf028
    RET                                 ; 004cf029


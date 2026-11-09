; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_tentacle_cpp_FUN_00595c40(CTentacle *this_ptr,char *class_name)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   class_name
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_tentacle.cpp_FUN_005952f0 at 005953d3
;
; Referenced Globals:
;   undefined4 DAT_005f77ae
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CDemonSetInstance.field1372328_0x14f0a8
;   undefined4 g_CDemonSetInstance.field1372332_0x14f0ac
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00595c40
        ;   Label: core_tentacle.cpp_FUN_00595c40
    PUSH ESI                            ; 00595c41
    PUSH EDI                            ; 00595c42
    PUSH EBP                            ; 00595c43
    MOV EBP,ESP                         ; 00595c44
    SUB ESP,0x2c                        ; 00595c46
    AND ESP,0xfffffff8                  ; 00595c49
    MOV EAX,dword ptr [EBP + 0x14]      ; 00595c4c
    XOR EDX,EDX                         ; 00595c4f
    ADD EAX,0x20                        ; 00595c51
    MOV dword ptr [ESP + 0x28],EDX      ; 00595c54
    MOV dword ptr [ESP + 0x24],EDX      ; 00595c58
    MOV dword ptr [ESP + 0x20],EAX      ; 00595c5c
    MOV EAX,[0x00622c18]                ; 00595c60 | g_CDemonSetPtr
        ;   Label: LAB_00595c60
    MOV EBX,dword ptr [ESP + 0x24]      ; 00595c65
    CMP EBX,dword ptr [EAX + 0x14f0a8]  ; 00595c69 | g_CDemonSetInstance.field1372328_0x14f0a8
    JGE 0x00595d2f                      ; 00595c6f
        ;   XREF to: 00595d2f (CONDITIONAL_JUMP)  ; LAB_00595d2f
    ADD EAX,dword ptr [ESP + 0x28]      ; 00595c75
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 00595c79 | g_CDemonSetInstance.field1372332_0x14f0ac
    CMP EBX,dword ptr [EBP + 0x14]      ; 00595c7f
    JNZ 0x00595c9a                      ; 00595c82
        ;   XREF to: 00595c9a (CONDITIONAL_JUMP)  ; LAB_00595c9a
    MOV EBX,dword ptr [ESP + 0x24]      ; 00595c84
        ;   Label: LAB_00595c84
    MOV ECX,dword ptr [ESP + 0x28]      ; 00595c88
    INC EBX                             ; 00595c8c
    ADD ECX,0x4                         ; 00595c8d
    MOV dword ptr [ESP + 0x24],EBX      ; 00595c90
    MOV dword ptr [ESP + 0x28],ECX      ; 00595c94
    JMP 0x00595c60                      ; 00595c98
        ;   XREF to: 00595c60 (UNCONDITIONAL_JUMP)  ; LAB_00595c60
    MOV EDX,dword ptr [EBP + 0x18]      ; 00595c9a
        ;   Label: LAB_00595c9a
    PUSH EDX                            ; 00595c9d
    PUSH EBX                            ; 00595c9e
    CALL core_actor.cpp_FUN_0040c550    ; 00595c9f
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00595ca4
    TEST EAX,EAX                        ; 00595ca7
    JZ 0x00595c84                       ; 00595ca9
        ;   XREF to: 00595c84 (CONDITIONAL_JUMP)  ; LAB_00595c84
    MOV EDX,dword ptr [ESP + 0x20]      ; 00595cab
    LEA EAX,[EBX + 0x20]                ; 00595caf
    MOV EDI,ESP                         ; 00595cb2
    LEA ESI,[ESP + 0xc]                 ; 00595cb4
    FLD float ptr [EAX]                 ; 00595cb8
    FLD float ptr [EAX + 0x4]           ; 00595cba
    FLD float ptr [EAX + 0x8]           ; 00595cbd
    FXCH ST2                            ; 00595cc0
    FSUB float ptr [EDX]                ; 00595cc2
    FXCH                                ; 00595cc4
    FSUB float ptr [EDX + 0x4]          ; 00595cc6
    FXCH ST2                            ; 00595cc9
    FSUB float ptr [EDX + 0x8]          ; 00595ccb
    FXCH                                ; 00595cce
    FSTP float ptr [ESP + 0xc]          ; 00595cd0
    FXCH                                ; 00595cd4
    FSTP float ptr [ESP + 0x10]         ; 00595cd6
    FSTP float ptr [ESP + 0x14]         ; 00595cda
    MOVSD ES:EDI,ESI                    ; 00595cde
    MOVSD ES:EDI,ESI                    ; 00595cdf
    MOVSD ES:EDI,ESI                    ; 00595ce0
    FLD float ptr [ESP + 0x4]           ; 00595ce1
    FLD ST0                             ; 00595ce5
    FMUL double ptr [0x005f77ae]        ; 00595ce7 | DAT_005f77ae
    FSTP ST1                            ; 00595ced
    FST float ptr [ESP + 0x4]           ; 00595cef
    FMUL float ptr [ESP + 0x4]          ; 00595cf3
    FLD float ptr [ESP]                 ; 00595cf7
    FMUL ST0                            ; 00595cfa
    FADDP                               ; 00595cfc
    FLD float ptr [ESP + 0x8]           ; 00595cfe
    FMUL ST0                            ; 00595d02
    FADDP                               ; 00595d04
    FSQRT                               ; 00595d06
    MOV EAX,dword ptr [EBP + 0x14]      ; 00595d08
    FCOMP float ptr [EAX + 0xc1e0]      ; 00595d0b
    FNSTSW AX                           ; 00595d11
    SAHF                                ; 00595d13
    JNC 0x00595c84                      ; 00595d14
        ;   XREF to: 00595c84 (CONDITIONAL_JUMP)  ; LAB_00595c84
    MOV EAX,dword ptr [EBP + 0x14]      ; 00595d1a
    MOV dword ptr [EAX + 0xc1e8],EBX    ; 00595d1d
    MOV EAX,0x1                         ; 00595d23
    MOV ESP,EBP                         ; 00595d28
    POP EBP                             ; 00595d2a
    POP EDI                             ; 00595d2b
    POP ESI                             ; 00595d2c
    POP EBX                             ; 00595d2d
    RET                                 ; 00595d2e
    XOR EAX,EAX                         ; 00595d2f
        ;   Label: LAB_00595d2f
    MOV ESP,EBP                         ; 00595d31
    POP EBP                             ; 00595d33
    POP EDI                             ; 00595d34
    POP ESI                             ; 00595d35
    POP EBX                             ; 00595d36
    RET                                 ; 00595d37


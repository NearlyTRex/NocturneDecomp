; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_FUN_004f2c40(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined1       Stack[-0x38]:1  local_38
; undefined1       Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043fde7
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d4016
;   core_haystack.cpp_CHaystack_process_FUN_004f0e40 at 004f1274
;   core_icepick.cpp_CIcePick_process_FUN_004f80b0 at 004f85f7
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5d65
;   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 at 005d90af
;
; Referenced Globals:
;   double DOUBLE_0062ec0e = 4
;   double DOUBLE_0062ec16 = 5
;   double DOUBLE_0062ec1e = 0.349065850388889
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CEventList g_CEventListInstance
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 g_CDemonSetInstance.characters[0]
;   undefined4 DAT_03263318
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_event.cpp_CEventList_executeCommands_FUN_004aabe0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f2c40
        ;   Label: core_hero.cpp_CHero_FUN_004f2c40
    PUSH ESI                            ; 004f2c41
    PUSH EDI                            ; 004f2c42
    PUSH EBP                            ; 004f2c43
    MOV EBP,ESP                         ; 004f2c44
    SUB ESP,0x40                        ; 004f2c46
    AND ESP,0xfffffff8                  ; 004f2c49
    MOV EBX,0x3fc00000                  ; 004f2c4c
    MOV EAX,ESP                         ; 004f2c51
    MOV ESI,dword ptr [EBP + 0x14]      ; 004f2c53
    PUSH EAX                            ; 004f2c56
    LEA EAX,[ESP + 0x1c]                ; 004f2c57
    XOR EDX,EDX                         ; 004f2c5b
    PUSH EAX                            ; 004f2c5d
    XOR EDI,EDI                         ; 004f2c5e
    MOV dword ptr [ESP + 0x8],EDX       ; 004f2c60
    PUSH ESI                            ; 004f2c64
    MOV dword ptr [ESP + 0x10],EDX      ; 004f2c65
    MOV dword ptr [ESP + 0x14],EBX      ; 004f2c69
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f2c6d
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f2c72
    ADD ESI,0x20                        ; 004f2c75
    MOV dword ptr [ESP + 0x3c],EDI      ; 004f2c78
    MOV EAX,[0x006810c8]                ; 004f2c7c | g_CDemonSetPtr
        ;   Label: LAB_004f2c7c
    CMP EDI,dword ptr [EAX + 0x14f098]  ; 004f2c81 | g_CDemonSetInstance.character_count
    JGE 0x004f2d5e                      ; 004f2c87
        ;   XREF to: 004f2d5e (CONDITIONAL_JUMP)  ; LAB_004f2d5e
    ADD EAX,dword ptr [ESP + 0x3c]      ; 004f2c8d
    MOV EBX,dword ptr [EAX + 0x14f09c]  ; 004f2c91 | g_CDemonSetInstance.characters[0] | DAT_03263318
    CMP byte ptr [EBX + 0x2534],0x0     ; 004f2c97
    JZ 0x004f2ca5                       ; 004f2c9e
        ;   XREF to: 004f2ca5 (CONDITIONAL_JUMP)  ; LAB_004f2ca5
    CMP EBX,dword ptr [EBP + 0x14]      ; 004f2ca0
    JNZ 0x004f2cb3                      ; 004f2ca3
        ;   XREF to: 004f2cb3 (CONDITIONAL_JUMP)  ; LAB_004f2cb3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f2ca5
        ;   Label: LAB_004f2ca5
    ADD EAX,0x4                         ; 004f2ca9
    INC EDI                             ; 004f2cac
    MOV dword ptr [ESP + 0x3c],EAX      ; 004f2cad
    JMP 0x004f2c7c                      ; 004f2cb1
        ;   XREF to: 004f2c7c (UNCONDITIONAL_JUMP)  ; LAB_004f2c7c
    LEA EAX,[EBX + 0x20]                ; 004f2cb3
        ;   Label: LAB_004f2cb3
    FLD float ptr [EAX]                 ; 004f2cb6
    FSUB float ptr [ESI]                ; 004f2cb8
    FSTP float ptr [ESP + 0x30]         ; 004f2cba
    FLD float ptr [EAX + 0x4]           ; 004f2cbe
    FSUB float ptr [ESI + 0x4]          ; 004f2cc1
    FST float ptr [ESP + 0x34]          ; 004f2cc4
    FLD float ptr [EAX + 0x8]           ; 004f2cc8
    FXCH                                ; 004f2ccb
    FABS                                ; 004f2ccd
    FXCH                                ; 004f2ccf
    FSUB float ptr [ESI + 0x8]          ; 004f2cd1
    FSTP float ptr [ESP + 0x38]         ; 004f2cd4
    FCOMP double ptr [0x0062ec0e]       ; 004f2cd8 | DOUBLE_0062ec0e
    FNSTSW AX                           ; 004f2cde
    SAHF                                ; 004f2ce0
    JA 0x004f2ca5                       ; 004f2ce1
        ;   XREF to: 004f2ca5 (CONDITIONAL_JUMP)  ; LAB_004f2ca5
    FLD float ptr [ESP + 0x30]          ; 004f2ce3
    FMUL ST0                            ; 004f2ce7
    FLD float ptr [ESP + 0x38]          ; 004f2ce9
    FMUL ST0                            ; 004f2ced
    FADDP                               ; 004f2cef
    FSQRT                               ; 004f2cf1
    XOR EDX,EDX                         ; 004f2cf3
    MOV dword ptr [ESP + 0x34],EDX      ; 004f2cf5
    FCOMP double ptr [0x0062ec16]       ; 004f2cf9 | DOUBLE_0062ec16
    FNSTSW AX                           ; 004f2cff
    SAHF                                ; 004f2d01
    JA 0x004f2ca5                       ; 004f2d02
        ;   XREF to: 004f2ca5 (CONDITIONAL_JUMP)  ; LAB_004f2ca5
    LEA EAX,[ESP + 0x30]                ; 004f2d04
    PUSH EAX                            ; 004f2d08
    LEA EAX,[ESP + 0x28]                ; 004f2d09
    PUSH EAX                            ; 004f2d0d
    MOV ECX,dword ptr [EBP + 0x14]      ; 004f2d0e
    PUSH ECX                            ; 004f2d11
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 004f2d12
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 004f2d17
    PUSH EAX                            ; 004f2d1a
    LEA EAX,[ESP + 0x10]                ; 004f2d1b
    PUSH EAX                            ; 004f2d1f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f2d20
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 004f2d25
    FABS                                ; 004f2d28
    ADD ESP,0x8                         ; 004f2d2a
    FCOMP double ptr [0x0062ec1e]       ; 004f2d2d | DOUBLE_0062ec1e
    FNSTSW AX                           ; 004f2d33
    SAHF                                ; 004f2d35
    JA 0x004f2ca5                       ; 004f2d36
        ;   XREF to: 004f2ca5 (CONDITIONAL_JUMP)  ; LAB_004f2ca5
    ADD EBX,0x2534                      ; 004f2d3c
    PUSH EBX                            ; 004f2d42
    MOV EBX,dword ptr [0x006793d0]      ; 004f2d43 | g_CEventListInstance | g_CEventListPtr
    PUSH EBX                            ; 004f2d49 | g_CEventListInstance
    CALL core_event.cpp_CEventList_executeCommands_FUN_004aabe0 ; 004f2d4a
        ;   XREF to: 004aabe0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004aabe0(CEventList * this_ptr, char * commands)
    MOV EAX,0x1                         ; 004f2d4f
    ADD ESP,0x8                         ; 004f2d54
    MOV ESP,EBP                         ; 004f2d57
    POP EBP                             ; 004f2d59
    POP EDI                             ; 004f2d5a
    POP ESI                             ; 004f2d5b
    POP EBX                             ; 004f2d5c
    RET                                 ; 004f2d5d
    XOR EAX,EAX                         ; 004f2d5e
        ;   Label: LAB_004f2d5e
    MOV ESP,EBP                         ; 004f2d60
    POP EBP                             ; 004f2d62
    POP EDI                             ; 004f2d63
    POP ESI                             ; 004f2d64
    POP EBX                             ; 004f2d65
    RET                                 ; 004f2d66


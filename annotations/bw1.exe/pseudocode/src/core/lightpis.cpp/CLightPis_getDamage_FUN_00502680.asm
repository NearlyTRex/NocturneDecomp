; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_lightpis_cpp_CLightPis_getDamage_FUN_00502680(CLightPis *this_ptr)
;
; Parameters:
; CLightPis *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005e701e
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field160_0xd0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 00502680
        ;   Label: core_lightpis.cpp_CLightPis_getDamage_FUN_00502680
    MOV EAX,dword ptr [ESP + 0x10]      ; 00502683
    CMP dword ptr [EAX + 0x56c],0x6     ; 00502687
    JNZ 0x0050269f                      ; 0050268e
        ;   XREF to: 0050269f (CONDITIONAL_JUMP)  ; LAB_0050269f
    PUSH EBX                            ; 00502690
    XOR EBX,EBX                         ; 00502691
    MOV dword ptr [ESP + 0x4],EBX       ; 00502693
    POP EBX                             ; 00502697
    MOV EAX,dword ptr [ESP]             ; 00502698
    ADD ESP,0xc                         ; 0050269b
    RET                                 ; 0050269e
    PUSH 0x420c0000                     ; 0050269f
        ;   Label: LAB_0050269f
    PUSH 0x41900000                     ; 005026a4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005026a9
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 005026ae
    MOV EAX,[0x0061d95c]                ; 005026b2 | g_CGamePtr
    FLD float ptr [ESP + 0x10]          ; 005026b7
    ADD ESP,0x8                         ; 005026bb
    MOV ECX,dword ptr [EAX + 0xd0]      ; 005026be | g_CGameInstance.field160_0xd0
    FSTP float ptr [ESP + 0x4]          ; 005026c4
    CMP ECX,0x3                         ; 005026c8
    JNZ 0x005026db                      ; 005026cb
        ;   XREF to: 005026db (CONDITIONAL_JUMP)  ; LAB_005026db
    FLD float ptr [ESP + 0x4]           ; 005026cd
    FMUL float ptr [0x005e701e]         ; 005026d1 | DAT_005e701e
    FSTP float ptr [ESP + 0x4]          ; 005026d7
    MOV EAX,dword ptr [ESP + 0x4]       ; 005026db
        ;   Label: LAB_005026db
    MOV dword ptr [ESP],EAX             ; 005026df
    MOV EAX,dword ptr [ESP]             ; 005026e2
    ADD ESP,0xc                         ; 005026e5
    RET                                 ; 005026e8


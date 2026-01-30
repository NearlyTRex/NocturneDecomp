; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_melee_cpp_FUN_0050ec10(void)
;
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   double DOUBLE_00635ce5 = 1.15000000000000
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_gore.cpp_FUN_004edaa0
;   core_weapon.cpp_CWeapon_process_FUN_005ee110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ec10
        ;   Label: core_melee.cpp_FUN_0050ec10
    SUB ESP,0x20                        ; 0050ec11
    MOV EBX,dword ptr [ESP + 0x28]      ; 0050ec14
    PUSH dword ptr [ESP + 0x2c]         ; 0050ec18
    PUSH EBX                            ; 0050ec1c
    CALL core_weapon.cpp_CWeapon_process_FUN_005ee110 ; 0050ec1d
        ;   XREF to: 005ee110 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x590]     ; 0050ec22
    ADD ESP,0x8                         ; 0050ec28
    TEST EDX,EDX                        ; 0050ec2b
    JLE 0x0050ec48                      ; 0050ec2d
        ;   XREF to: 0050ec48 (CONDITIONAL_JUMP)  ; LAB_0050ec48
    FLD float ptr [EBX + 0x594]         ; 0050ec2f
    FSUB float ptr [ESP + 0x2c]         ; 0050ec35
    FST float ptr [EBX + 0x594]         ; 0050ec39
    FLDZ                                ; 0050ec3f
    FCOMPP                              ; 0050ec41
    FNSTSW AX                           ; 0050ec43
    SAHF                                ; 0050ec45
    JNC 0x0050ec4d                      ; 0050ec46
        ;   XREF to: 0050ec4d (CONDITIONAL_JUMP)  ; LAB_0050ec4d
    ADD ESP,0x20                        ; 0050ec48
        ;   Label: LAB_0050ec48
    POP EBX                             ; 0050ec4b
    RET                                 ; 0050ec4c
    PUSH EDI                            ; 0050ec4d
        ;   Label: LAB_0050ec4d
    PUSH ESI                            ; 0050ec4e
    FLD float ptr [EBX + 0x598]         ; 0050ec4f
    FLD ST0                             ; 0050ec55
    FMUL double ptr [0x00635ce5]        ; 0050ec57 | DOUBLE_00635ce5
    LEA EDX,[ESP + 0x8]                 ; 0050ec5d
    MOV ECX,dword ptr [EBX + 0x590]     ; 0050ec61
    PUSH EDX                            ; 0050ec67
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050ec68
    DEC ECX                             ; 0050ec6e
    PUSH EBX                            ; 0050ec6f
    MOV dword ptr [EBX + 0x590],ECX     ; 0050ec70
    FSTP ST1                            ; 0050ec76
    FST float ptr [EBX + 0x598]         ; 0050ec78
    FSTP float ptr [EBX + 0x594]        ; 0050ec7e
    CALL dword ptr [EAX + 0xf4]         ; 0050ec84
    ADD ESP,0x8                         ; 0050ec8a
    PUSH EAX                            ; 0050ec8d
    LEA EAX,[ESP + 0x18]                ; 0050ec8e
    PUSH EAX                            ; 0050ec92
    PUSH EBX                            ; 0050ec93
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0050ec94
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0050ec99
    MOV ESI,dword ptr [EBX + 0x58c]     ; 0050ec9c
    PUSH ESI                            ; 0050eca2
    PUSH 0x3f87558                      ; 0050eca3 | g_ZeroVector
    LEA EAX,[ESP + 0x1c]                ; 0050eca8
    PUSH EAX                            ; 0050ecac
    MOV EDI,dword ptr [0x0067b9a0]      ; 0050ecad | g_CGorePtr
    PUSH EDI                            ; 0050ecb3 | g_CGoreInstance
    CALL core_gore.cpp_FUN_004edaa0     ; 0050ecb4
        ;   XREF to: 004edaa0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004edaa0()
    ADD ESP,0x10                        ; 0050ecb9
    POP ESI                             ; 0050ecbc
    POP EDI                             ; 0050ecbd
    ADD ESP,0x20                        ; 0050ecbe
    POP EBX                             ; 0050ecc1
    RET                                 ; 0050ecc2


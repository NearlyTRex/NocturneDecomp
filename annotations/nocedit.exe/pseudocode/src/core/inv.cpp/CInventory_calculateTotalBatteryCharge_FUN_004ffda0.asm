; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_inv_cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0 (CInventory *inventory_ptr,float max_charge)
;
; Parameters:
; CInventory *     Stack[0x4]:4   inventory_ptr
; float            Stack[0x8]:4   max_charge
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_lightgun.cpp_ChargedRadianceEmitterGunMaybe_FUN_00506450 at 0050647e
;
; Referenced Globals:
;   undefined4 g_CBatteryClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffda0
        ;   Label: core_inv.cpp_CInventory_calculateTotalBatteryCharge_FUN_004ffda0
    PUSH ESI                            ; 004ffda1
    PUSH EDI                            ; 004ffda2
    PUSH EBP                            ; 004ffda3
    MOV EBP,ESP                         ; 004ffda4
    SUB ESP,0x10                        ; 004ffda6
    AND ESP,0xfffffff8                  ; 004ffda9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004ffdac
    FLD float ptr [EBP + 0x18]          ; 004ffdaf
    FLD1                                ; 004ffdb2
    FDIVRP                              ; 004ffdb4
    MOV EDX,dword ptr [EDI + 0x8]       ; 004ffdb6
    XOR EBX,EBX                         ; 004ffdb9
    FSTP float ptr [ESP]                ; 004ffdbb
    TEST EDX,EDX                        ; 004ffdbe
    JLE 0x004ffde5                      ; 004ffdc0
        ;   XREF to: 004ffde5 (CONDITIONAL_JUMP)  ; LAB_004ffde5
    MOV ESI,EDI                         ; 004ffdc2
    MOV EAX,[0x0082285c]                ; 004ffdc4 | g_CBatteryClassInfo.name_hash
        ;   Label: LAB_004ffdc4
    PUSH EAX                            ; 004ffdc9
    MOV EDX,dword ptr [ESI + 0xc]       ; 004ffdca
    PUSH EDX                            ; 004ffdcd
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004ffdce
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ffdd3
    TEST EAX,EAX                        ; 004ffdd6
    JNZ 0x004ffdfb                      ; 004ffdd8
        ;   XREF to: 004ffdfb (CONDITIONAL_JUMP)  ; LAB_004ffdfb
    INC EBX                             ; 004ffdda
        ;   Label: LAB_004ffdda
    MOV ECX,dword ptr [EDI + 0x8]       ; 004ffddb
    ADD ESI,0x4                         ; 004ffdde
    CMP EBX,ECX                         ; 004ffde1
    JL 0x004ffdc4                       ; 004ffde3
        ;   XREF to: 004ffdc4 (CONDITIONAL_JUMP)  ; LAB_004ffdc4
    FLD float ptr [ESP]                 ; 004ffde5
        ;   Label: LAB_004ffde5
    FLD1                                ; 004ffde8
    FDIVRP                              ; 004ffdea
    FSTP float ptr [ESP + 0xc]          ; 004ffdec
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ffdf0
    MOV ESP,EBP                         ; 004ffdf4
    POP EBP                             ; 004ffdf6
    POP EDI                             ; 004ffdf7
    POP ESI                             ; 004ffdf8
    POP EBX                             ; 004ffdf9
    RET                                 ; 004ffdfa
    FLD float ptr [EAX + 0x2d8]         ; 004ffdfb
        ;   Label: LAB_004ffdfb
    FLD1                                ; 004ffe01
    FDIVRP                              ; 004ffe03
    FADD float ptr [ESP]                ; 004ffe05
    FSTP float ptr [ESP]                ; 004ffe08
    JMP 0x004ffdda                      ; 004ffe0b
        ;   XREF to: 004ffdda (UNCONDITIONAL_JUMP)  ; LAB_004ffdda


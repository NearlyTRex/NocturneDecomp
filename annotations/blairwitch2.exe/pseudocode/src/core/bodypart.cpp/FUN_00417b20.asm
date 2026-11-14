; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00417b20(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[3]:
;   core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00419520 at 00419782
;   core_mobster.cpp_CMobster_processWeaponPickup_FUN_004ff610 at 004ff8a0
;   core_zombie.cpp_CZombie_processPickup_FUN_005984e0 at 005987d2
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00417b20
        ;   Label: core_bodypart.cpp_FUN_00417b20
    SUB ESP,0xc                         ; 00417b21
    MOV ECX,dword ptr [ESP + 0x14]      ; 00417b24
    MOV EDX,dword ptr [ESP + 0x18]      ; 00417b28
    MOV EAX,ESI                         ; 00417b2c
    FLD float ptr [ECX]                 ; 00417b2e
    FMUL float ptr [EDX]                ; 00417b30
    FLD float ptr [ECX + 0x4]           ; 00417b32
    FMUL float ptr [EDX]                ; 00417b35
    FLD float ptr [ECX + 0x8]           ; 00417b37
    FMUL float ptr [EDX]                ; 00417b3a
    MOV EDI,ESI                         ; 00417b3c
    MOV ESI,ESP                         ; 00417b3e
    FXCH                                ; 00417b40
    FSTP float ptr [ESP + 0x4]          ; 00417b42
    FSTP float ptr [ESP + 0x8]          ; 00417b46
    FSTP float ptr [ESP]                ; 00417b4a
    MOVSD ES:EDI,ESI                    ; 00417b4d
    MOVSD ES:EDI,ESI                    ; 00417b4e
    MOVSD ES:EDI,ESI                    ; 00417b4f
    ADD ESP,0xc                         ; 00417b50
    POP EDI                             ; 00417b53
    RET                                 ; 00417b54


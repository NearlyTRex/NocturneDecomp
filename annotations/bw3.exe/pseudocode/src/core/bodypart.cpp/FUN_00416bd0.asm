; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bodypart_cpp_FUN_00416bd0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[5]:
;   core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930 at 00418b92
;   core_carved.cpp_FUN_00427bc0 at 00427eb8
;   core_demnfolk.cpp_FUN_00457740 at 00457a32
;   core_zombie.cpp_CZombie_processPickup_FUN_0058b3f0 at 0058b6e2
;   core_zombiepriest.cpp_FUN_0058efb0 at 0058f240
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00416bd0
        ;   Label: core_bodypart.cpp_FUN_00416bd0
    SUB ESP,0xc                         ; 00416bd1
    MOV ECX,dword ptr [ESP + 0x14]      ; 00416bd4
    MOV EDX,dword ptr [ESP + 0x18]      ; 00416bd8
    MOV EAX,ESI                         ; 00416bdc
    FLD float ptr [ECX]                 ; 00416bde
    FMUL float ptr [EDX]                ; 00416be0
    FLD float ptr [ECX + 0x4]           ; 00416be2
    FMUL float ptr [EDX]                ; 00416be5
    FLD float ptr [ECX + 0x8]           ; 00416be7
    FMUL float ptr [EDX]                ; 00416bea
    MOV EDI,ESI                         ; 00416bec
    MOV ESI,ESP                         ; 00416bee
    FXCH                                ; 00416bf0
    FSTP float ptr [ESP + 0x4]          ; 00416bf2
    FSTP float ptr [ESP + 0x8]          ; 00416bf6
    FSTP float ptr [ESP]                ; 00416bfa
    MOVSD ES:EDI,ESI                    ; 00416bfd
    MOVSD ES:EDI,ESI                    ; 00416bfe
    MOVSD ES:EDI,ESI                    ; 00416bff
    ADD ESP,0xc                         ; 00416c00
    POP EDI                             ; 00416c03
    RET                                 ; 00416c04


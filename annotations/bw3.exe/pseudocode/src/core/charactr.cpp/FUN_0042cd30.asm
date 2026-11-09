; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_0042cd30(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[36]:
;   core_asgaya.cpp_FUN_005a0be0 at 005a104b
;   core_baal.cpp_FUN_005968a0 at 005976c6
;   core_boneguy.cpp_FUN_004179b0 at 00418005
;   core_boneguy.cpp_FUN_00419b40 at 0041a157
;   core_carved.cpp_FUN_00425da0 at 00426b23
;   core_constrct.cpp_FUN_00442a20 at 00443598
;   core_cow.cpp_FUN_00445130 at 0044536e
;   core_demnfolk.cpp_FUN_00455080 at 00455d36
;   core_dog.cpp_FUN_004628b0 at 00462b69
;   core_gargoyle.cpp_FUN_004c5350 at 004c55ad
;   ... and 26 more
;
; Called Functions:
;   core_charactr.cpp_FUN_00433220
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0042cd30
        ;   Label: core_charactr.cpp_FUN_0042cd30
    PUSH EDI                            ; 0042cd31
    SUB ESP,0xc                         ; 0042cd32
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042cd35
    MOV EDI,ESP                         ; 0042cd39
    LEA ESI,[EAX + 0x30]                ; 0042cd3b
    MOV EDX,ESP                         ; 0042cd3e
    MOVSD ES:EDI,ESI                    ; 0042cd40
    MOVSD ES:EDI,ESI                    ; 0042cd41
    MOVSD ES:EDI,ESI                    ; 0042cd42
    PUSH EDX                            ; 0042cd43
    FLD float ptr [ESP + 0x8]           ; 0042cd44
    FADD float ptr [EAX + 0x2508]       ; 0042cd48
    PUSH EAX                            ; 0042cd4e
    FSTP float ptr [ESP + 0xc]          ; 0042cd4f
    MOV dword ptr [EAX + 0x2508],0x0    ; 0042cd53
    CALL core_charactr.cpp_FUN_00433220 ; 0042cd5d
        ;   XREF to: 00433220 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00433220()
    ADD ESP,0x8                         ; 0042cd62
    ADD ESP,0xc                         ; 0042cd65
    POP EDI                             ; 0042cd68
    POP ESI                             ; 0042cd69
    RET                                 ; 0042cd6a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_explode_FUN_0043cdb0(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_actor.cpp_FUN_0040b300 at 0040bc87
;   core_elephant.cpp_FUN_00477890 at 00477f75
;   core_gun.cpp_FUN_004b27c0 at 004b2f59
;   core_shotgun.cpp_FUN_00515ea0 at 005165bc
;   core_tommygun.cpp_FUN_00545c30 at 00546413
;   core_turret.cpp_CTurret_fire_FUN_0054ab10 at 0054afea
;
; Referenced Globals:
;   TerminatedCString s_s_exploding_0057b45f
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005baf90
;   undefined4 DAT_0077ad0c
;
; Called Functions:
;   core_fire.cpp_FUN_0048c0d0
;   core_mission.cpp_FUN_004d9110
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cdb0
        ;   Label: core_crate.cpp_CCrate_explode_FUN_0043cdb0
    SUB ESP,0x24                        ; 0043cdb1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0043cdb4
    CMP dword ptr [EBX + 0x70],0x1      ; 0043cdb8
    JZ 0x0043cdc3                       ; 0043cdbc
        ;   XREF to: 0043cdc3 (CONDITIONAL_JUMP)  ; LAB_0043cdc3
    ADD ESP,0x24                        ; 0043cdbe
    POP EBX                             ; 0043cdc1
    RET                                 ; 0043cdc2
    PUSH EBX                            ; 0043cdc3
        ;   Label: LAB_0043cdc3
    PUSH 0x57b45f                       ; 0043cdc4 | = "%s exploding!\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0043cdc9 | PTR_DAT_005ad350
    PUSH ECX                            ; 0043cdcf | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0043cdd0
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 0043cdd5
    MOV EAX,ESP                         ; 0043cdd8
    PUSH EAX                            ; 0043cdda
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0043cddb
    PUSH EBX                            ; 0043cde1
    CALL dword ptr [EDX + 0x14]         ; 0043cde2
    LEA EAX,[ESP + 0x20]                ; 0043cde5
    LEA EDX,[EBX + 0x20]                ; 0043cde9
    ADD ESP,0x8                         ; 0043cdec
    CMP EAX,EDX                         ; 0043cdef
    JZ 0x0043ce07                       ; 0043cdf1
        ;   XREF to: 0043ce07 (CONDITIONAL_JUMP)  ; LAB_0043ce07
    MOV EAX,dword ptr [EDX]             ; 0043cdf3
    MOV dword ptr [ESP + 0x18],EAX      ; 0043cdf5
    MOV EAX,dword ptr [EDX + 0x4]       ; 0043cdf9
    MOV dword ptr [ESP + 0x1c],EAX      ; 0043cdfc
    MOV EAX,dword ptr [EDX + 0x8]       ; 0043ce00
    MOV dword ptr [ESP + 0x20],EAX      ; 0043ce03
    PUSH EDI                            ; 0043ce07
        ;   Label: LAB_0043ce07
    PUSH ESI                            ; 0043ce08
    PUSH 0x40800000                     ; 0043ce09
    FLD float ptr [ESP + 0x1c]          ; 0043ce0e
    PUSH 0x44bb8000                     ; 0043ce12
    LEA EAX,[ESP + 0x28]                ; 0043ce17
    MOV ESI,dword ptr [0x005b80f0]      ; 0043ce1b | DAT_005b80f0
    PUSH 0x42000000                     ; 0043ce21
    FSUB float ptr [ESP + 0x18]         ; 0043ce26
    PUSH EAX                            ; 0043ce2a
    FADD float ptr [ESP + 0x34]         ; 0043ce2b
    PUSH ESI                            ; 0043ce2f
    FSTP float ptr [ESP + 0x38]         ; 0043ce30
    CALL core_fire.cpp_FUN_0048c0d0     ; 0043ce34
        ;   XREF to: 0048c0d0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0048c0d0()
    ADD ESP,0x14                        ; 0043ce39
    PUSH 0x1                            ; 0043ce3c
    PUSH EBX                            ; 0043ce3e
    MOV EDI,dword ptr [0x005baf90]      ; 0043ce3f | DAT_005baf90
    PUSH EDI                            ; 0043ce45
    CALL core_mission.cpp_FUN_004d9110  ; 0043ce46
        ;   XREF to: 004d9110 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004d9110()
    ADD ESP,0xc                         ; 0043ce4b
    MOV dword ptr [EBX + 0x70],0x2      ; 0043ce4e
    POP ESI                             ; 0043ce55
    POP EDI                             ; 0043ce56
    ADD ESP,0x24                        ; 0043ce57
    POP EBX                             ; 0043ce5a
    RET                                 ; 0043ce5b


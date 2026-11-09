; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00423a10(int param_1,float param_2)
;
;
; XREF[34]:
;   core_baron.cpp_FUN_0040f950 at 0040fae2
;   core_batcreat.cpp_FUN_00411a10 at 00411b51
;   core_batman.cpp_FUN_00412f40 at 00413083
;   core_biggs.cpp_FUN_00414e50 at 00414f5a
;   core_boneguy.cpp_FUN_004186c0 at 00418bd4
;   core_bride.cpp_FUN_0041dbe0 at 0041e633
;   core_colonel.cpp_FUN_00435830 at 00435d28
;   core_cow.cpp_FUN_004392b0 at 00439419
;   core_dog.cpp_FUN_0045e360 at 0045e51f
;   core_dracbrid.cpp_FUN_00462ff0 at 0046337d
;   ... and 24 more
;
; Referenced Globals:
;   undefined4 DAT_005ccc76
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423a10
        ;   Label: core_charactr.cpp_FUN_00423a10
    CMP dword ptr [EAX + 0x2814],0x0    ; 00423a14
    JNZ 0x00423a3d                      ; 00423a1b
        ;   XREF to: 00423a3d (CONDITIONAL_JUMP)  ; LAB_00423a3d
    CMP dword ptr [EAX + 0x256c],0x0    ; 00423a1d
    JZ 0x00423a3d                       ; 00423a24
        ;   XREF to: 00423a3d (CONDITIONAL_JUMP)  ; LAB_00423a3d
    FLD float ptr [ESP + 0x8]           ; 00423a26
    FMUL float ptr [0x005ccc76]         ; 00423a2a | DAT_005ccc76
    FADD float ptr [EAX + 0x258c]       ; 00423a30
    FSTP float ptr [EAX + 0x258c]       ; 00423a36
    RET                                 ; 00423a3c
    MOV dword ptr [EAX + 0x2590],0x0    ; 00423a3d
        ;   Label: LAB_00423a3d
    MOV EDX,dword ptr [EAX + 0x2590]    ; 00423a47
    MOV dword ptr [EAX + 0x258c],EDX    ; 00423a4d
    MOV EDX,dword ptr [EAX + 0x258c]    ; 00423a53
    MOV dword ptr [EAX + 0x2588],EDX    ; 00423a59
    RET                                 ; 00423a5f


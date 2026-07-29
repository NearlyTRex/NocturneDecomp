; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gore_cpp_CGore_load_FUN_004b0820(CGore *this_ptr,_FILE *file_handle)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; XREF[2]:
;   core_game.cpp_FUN_004a4170 at 004a4915
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d861e
;
; Referenced Globals:
;   TerminatedCString s_d_005851d8
;   TerminatedCString s_d_005851dc
;   undefined4 DAT_01c7ccf0
;   undefined4 DAT_01c9e038
;
; Called Functions:
;   core_gore.cpp_CBloodPool_load_FUN_004af7c0
;   core_gore.cpp_CBloodSplat_load_FUN_004af160
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0820
        ;   Label: core_gore.cpp_CGore_load_FUN_004b0820
    PUSH ESI                            ; 004b0821
    PUSH EDI                            ; 004b0822
    PUSH EBP                            ; 004b0823
    SUB ESP,0x100                       ; 004b0824
    MOV EDI,dword ptr [ESP + 0x118]     ; 004b082a
    PUSH EDI                            ; 004b0831
    PUSH 0xff                           ; 004b0832
    LEA EBX,[ESP + 0x8]                 ; 004b0837
    PUSH EBX                            ; 004b083b
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 004b083c
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004b0841
    PUSH 0x1c9e038                      ; 004b0844 | DAT_01c9e038
    PUSH 0x5851d8                       ; 004b0849 | = "%d\n"
    PUSH EDI                            ; 004b084e
    XOR ESI,ESI                         ; 004b084f
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004b0851
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EDX,dword ptr [0x01c9e038]      ; 004b0856 | DAT_01c9e038
    ADD ESP,0xc                         ; 004b085c
    TEST EDX,EDX                        ; 004b085f
    JLE 0x004b0880                      ; 004b0861
        ;   XREF to: 004b0880 (CONDITIONAL_JUMP)  ; LAB_004b0880
    MOV EBX,0x1c9e03c                   ; 004b0863
    PUSH EDI                            ; 004b0868
        ;   Label: LAB_004b0868
    PUSH EBX                            ; 004b0869
    INC ESI                             ; 004b086a
    CALL core_gore.cpp_CBloodPool_load_FUN_004af7c0 ; 004b086b
        ;   XREF to: 004af7c0 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodPool_load_FUN_004af7c0(CBloodPool * this_ptr, _FILE * file_handle)
    MOV ECX,dword ptr [0x01c9e038]      ; 004b0870 | DAT_01c9e038
    ADD ESP,0x8                         ; 004b0876
    ADD EBX,0x28                        ; 004b0879
    CMP ESI,ECX                         ; 004b087c
    JL 0x004b0868                       ; 004b087e
        ;   XREF to: 004b0868 (CONDITIONAL_JUMP)  ; LAB_004b0868
    PUSH 0x1c7ccf0                      ; 004b0880 | DAT_01c7ccf0
        ;   Label: LAB_004b0880
    PUSH 0x5851dc                       ; 004b0885 | = "%d\n"
    PUSH EDI                            ; 004b088a
    XOR ESI,ESI                         ; 004b088b
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 004b088d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_00563350(_FILE * file, char * format)
    MOV EBX,dword ptr [0x01c7ccf0]      ; 004b0892 | DAT_01c7ccf0
    ADD ESP,0xc                         ; 004b0898
    TEST EBX,EBX                        ; 004b089b
    JLE 0x004b08c0                      ; 004b089d
        ;   XREF to: 004b08c0 (CONDITIONAL_JUMP)  ; LAB_004b08c0
    MOV EBX,0x1c7ccf4                   ; 004b089f
    PUSH EDI                            ; 004b08a4
        ;   Label: LAB_004b08a4
    PUSH EBX                            ; 004b08a5
    INC ESI                             ; 004b08a6
    CALL core_gore.cpp_CBloodSplat_load_FUN_004af160 ; 004b08a7
        ;   XREF to: 004af160 (UNCONDITIONAL_CALL)  ; int core_gore.cpp_CBloodSplat_load_FUN_004af160(CBloodSplat * this_ptr, _FILE * file_handle)
    MOV EBP,dword ptr [0x01c7ccf0]      ; 004b08ac | DAT_01c7ccf0
    ADD ESP,0x8                         ; 004b08b2
    ADD EBX,0x44                        ; 004b08b5
    CMP ESI,EBP                         ; 004b08b8
    JL 0x004b08a4                       ; 004b08ba
        ;   XREF to: 004b08a4 (CONDITIONAL_JUMP)  ; LAB_004b08a4
    LEA EAX,[EAX]                       ; 004b08bc
    ADD ESP,0x100                       ; 004b08c0
        ;   Label: LAB_004b08c0
    POP EBP                             ; 004b08c6
    POP EDI                             ; 004b08c7
    POP ESI                             ; 004b08c8
    POP EBX                             ; 004b08c9
    RET                                 ; 004b08ca


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_CMoloch_FUN_00529900(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_moloch.cpp_CMoloch_process_FUN_00528d20 at 00529104
;
; Referenced Globals:
;   TerminatedCString s_moloch_morph_todemon_wav_00639eaf
;   TerminatedCString s_moloch_morph_tohuman_wav_00639ec8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00529900
        ;   Label: core_moloch.cpp_CMoloch_FUN_00529900
    MOV dword ptr [EAX + 0x21e90],0x0   ; 00529904
    MOV EDX,dword ptr [EAX + 0x21e88]   ; 0052990e
    MOV dword ptr [EAX + 0x21e8c],0x1   ; 00529914
    TEST EDX,EDX                        ; 0052991e
    JZ 0x00529935                       ; 00529920
        ;   XREF to: 00529935 (CONDITIONAL_JUMP)  ; LAB_00529935
    PUSH 0x639eaf                       ; 00529922 | = "moloch-morph-todemon.wav"
    MOV EDX,dword ptr [EAX + 0x154]     ; 00529927
    PUSH EAX                            ; 0052992d
    CALL dword ptr [EDX + 0x24]         ; 0052992e
    ADD ESP,0x8                         ; 00529931
    RET                                 ; 00529934
    PUSH 0x639ec8                       ; 00529935 | = "moloch-morph-tohuman.wav"
        ;   Label: LAB_00529935
    MOV EDX,dword ptr [EAX + 0x154]     ; 0052993a
    PUSH EAX                            ; 00529940
    CALL dword ptr [EDX + 0x24]         ; 00529941
    ADD ESP,0x8                         ; 00529944
    RET                                 ; 00529947


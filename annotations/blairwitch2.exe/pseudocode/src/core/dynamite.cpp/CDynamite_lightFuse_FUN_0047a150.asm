; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dynamite_cpp_CDynamite_lightFuse_FUN_0047a150(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
;
; XREF[2]:
;   core_doc.cpp_FUN_0045bdc0 at 0045c5a7
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50 at 0056e13b
;
; Referenced Globals:
;   TerminatedCString s_fuse_wav_005d1e57
;   undefined4 DAT_005f5bac
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a150
        ;   Label: core_dynamite.cpp_CDynamite_lightFuse_FUN_0047a150
    SUB ESP,0x64                        ; 0047a151
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0047a154
    PUSH 0x5d1e57                       ; 0047a158 | = "fuse.wav"
    LEA EAX,[ESP + 0x4]                 ; 0047a15d
    FLD float ptr [0x005f5bac]          ; 0047a161 | DAT_005f5bac
    PUSH EAX                            ; 0047a167
    FSTP float ptr [EBX + 0x6d4]        ; 0047a168
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0047a16e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x8                         ; 0047a173
    MOV EAX,ESP                         ; 0047a176
    PUSH EAX                            ; 0047a178
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0047a179
    PUSH EBX                            ; 0047a17f
    CALL dword ptr [EDX + 0x34]         ; 0047a180
    ADD ESP,0x8                         ; 0047a183
    MOV dword ptr [EBX + 0x6e4],EAX     ; 0047a186
    ADD ESP,0x64                        ; 0047a18c
    POP EBX                             ; 0047a18f
    RET                                 ; 0047a190


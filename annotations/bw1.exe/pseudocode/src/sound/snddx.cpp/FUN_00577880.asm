; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool sound_snddx_cpp_FUN_00577880(int param_1)
;
;
; XREF[3]:
;   sound_snddx.cpp_FUN_00577cd0 at 00577cf8
;   sound_snddx.cpp_FUN_00578cc0 at 00578f03
;   sound_snddx.cpp_FUN_00579f30 at 00579f62
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_Stop_hardware_sfx_second_005f4c82
;
; Called Functions:
;   crt_unknown.c_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577880
        ;   Label: sound_snddx.cpp_FUN_00577880
    PUSH ESI                            ; 00577881
    PUSH EDI                            ; 00577882
    PUSH EBP                            ; 00577883
    SUB ESP,0x190                       ; 00577884
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 0057788a
    LEA EAX,[EDX*0x8 + 0x0]             ; 00577891
    ADD EAX,EDX                         ; 00577898
    MOV EBX,0x2c823e0                   ; 0057789a
    SHL EAX,0x2                         ; 0057789f
    ADD EBX,EAX                         ; 005778a2
    MOV EDX,dword ptr [EBX]             ; 005778a4
    MOV EDI,0x1                         ; 005778a6
    TEST EDX,EDX                        ; 005778ab
    JNZ 0x005778d7                      ; 005778ad
        ;   XREF to: 005778d7 (CONDITIONAL_JUMP)  ; LAB_005778d7
    MOV dword ptr [EBX],0x0             ; 005778af
        ;   Label: LAB_005778af
    MOV dword ptr [EBX + 0x10],0x0      ; 005778b5
    MOV dword ptr [EBX + 0xc],0x0       ; 005778bc
    MOV EAX,EDI                         ; 005778c3
    MOV dword ptr [EBX + 0x8],0x0       ; 005778c5
    ADD ESP,0x190                       ; 005778cc
    POP EBP                             ; 005778d2
    POP EDI                             ; 005778d3
    POP ESI                             ; 005778d4
    POP EBX                             ; 005778d5
    RET                                 ; 005778d6
    MOV EAX,EDX                         ; 005778d7
        ;   Label: LAB_005778d7
    PUSH EAX                            ; 005778d9
    MOV EDX,dword ptr [EDX]             ; 005778da
    CALL dword ptr [EDX + 0x48]         ; 005778dc
    TEST EAX,EAX                        ; 005778df
    JNZ 0x00577964                      ; 005778e1
        ;   XREF to: 00577964 (CONDITIONAL_JUMP)  ; LAB_00577964
    LEA ESI,[EBX + 0x4]                 ; 005778e7
        ;   Label: LAB_005778e7
    MOV ECX,dword ptr [ESI]             ; 005778ea
    TEST ECX,ECX                        ; 005778ec
    JZ 0x005778fc                       ; 005778ee
        ;   XREF to: 005778fc (CONDITIONAL_JUMP)  ; LAB_005778fc
    PUSH ECX                            ; 005778f0
    MOV EDX,dword ptr [ECX]             ; 005778f1
    CALL dword ptr [EDX + 0x8]          ; 005778f3
    MOV dword ptr [ESI],0x0             ; 005778f6
    MOV ESI,dword ptr [EBX + 0x8]       ; 005778fc
        ;   Label: LAB_005778fc
    LEA EAX,[ESI*0x4 + 0x0]             ; 005778ff
    SUB EAX,ESI                         ; 00577906
    MOV ESI,0x2c81dc4                   ; 00577908
    SHL EAX,0x3                         ; 0057790d
    MOV EBP,dword ptr [EBX + 0x10]      ; 00577910
    ADD ESI,EAX                         ; 00577913
    TEST EBP,EBP                        ; 00577915
    JZ 0x0057792f                       ; 00577917
        ;   XREF to: 0057792f (CONDITIONAL_JUMP)  ; LAB_0057792f
    LEA EAX,[EBP*0x8 + 0x0]             ; 00577919
    LEA EDX,[EAX + EBP*0x1]             ; 00577920
    SHL EDX,0x2                         ; 00577923
    MOV EAX,dword ptr [EBX + 0xc]       ; 00577926
    MOV dword ptr [EDX + 0x2c823ec],EAX ; 00577929
    MOV EDX,dword ptr [ESP + 0x1a4]     ; 0057792f
        ;   Label: LAB_0057792f
    CMP EDX,dword ptr [ESI + 0x4]       ; 00577936
    JNZ 0x00577997                      ; 00577939
        ;   XREF to: 00577997 (CONDITIONAL_JUMP)  ; LAB_00577997
    MOV EAX,dword ptr [EBX + 0x10]      ; 0057793b
    MOV dword ptr [ESI + 0x4],EAX       ; 0057793e
    MOV ECX,dword ptr [EBX]             ; 00577941
        ;   Label: LAB_00577941
    CMP ECX,dword ptr [ESI]             ; 00577943
    JZ 0x005778af                       ; 00577945
        ;   XREF to: 005778af (CONDITIONAL_JUMP)  ; LAB_005778af
    TEST ECX,ECX                        ; 0057794b
    JZ 0x005778af                       ; 0057794d
        ;   XREF to: 005778af (CONDITIONAL_JUMP)  ; LAB_005778af
    PUSH ECX                            ; 00577953
    MOV EDX,dword ptr [ECX]             ; 00577954
    CALL dword ptr [EDX + 0x8]          ; 00577956
    MOV dword ptr [EBX],0x0             ; 00577959
    JMP 0x005778af                      ; 0057795f
        ;   XREF to: 005778af (UNCONDITIONAL_JUMP)  ; LAB_005778af
    PUSH EAX                            ; 00577964
        ;   Label: LAB_00577964
    CALL sound_snddx.cpp_FUN_00577500   ; 00577965
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 0057796a
    PUSH EAX                            ; 0057796d
    PUSH 0x5f4c82                       ; 0057796e | = "Stop hardware sfx secondary buffer"
    PUSH 0x5f4c35                       ; 00577973 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00577978
    PUSH EAX                            ; 0057797c
    CALL crt_unknown.c_FUN_005bfb40     ; 0057797d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 00577982
    MOV EAX,ESP                         ; 00577985
    PUSH EAX                            ; 00577987
    XOR EDI,EDI                         ; 00577988
    CALL sound_sndmain.cpp_FUN_005773f0 ; 0057798a
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057798f
    JMP 0x005778e7                      ; 00577992
        ;   XREF to: 005778e7 (UNCONDITIONAL_JUMP)  ; LAB_005778e7
    MOV EDX,dword ptr [EBX + 0xc]       ; 00577997
        ;   Label: LAB_00577997
    LEA EAX,[EDX*0x8 + 0x0]             ; 0057799a
    ADD EAX,EDX                         ; 005779a1
    MOV EDX,dword ptr [EBX + 0x10]      ; 005779a3
    MOV dword ptr [EAX*0x4 + 0x2c823f0],EDX ; 005779a6
    JMP 0x00577941                      ; 005779ad
        ;   XREF to: 00577941 (UNCONDITIONAL_JUMP)  ; LAB_00577941


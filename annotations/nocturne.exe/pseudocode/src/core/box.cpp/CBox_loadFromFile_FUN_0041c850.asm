; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041c850(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x144]:1  local_144
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_actor.cpp_FUN_0040ce80 at 0040ceb9
;
; Referenced Globals:
;   TerminatedCString s_d_00579705
;   TerminatedCString s_f_f_f_0057970a
;   string s_%f,%f,%f_00579715
;   string s_%f,%f,%f_00579720
;   TerminatedCString s_f_0057972b
;   string s_%f,%f,%f_00579730
;   string s_%f,%f,%f_0057973b
;   TerminatedCString s_d_00579746
;
; Called Functions:
;   core_box.cpp_CBox_setupCorners_FUN_0041a6e0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   crt_stdio.c_fgets_FUN_00564b20
;   crt_stdio.c_fscanf_FUN_00563350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041c850
        ;   Label: core_box.cpp_CBox_loadFromFile_FUN_0041c850
    PUSH ESI                            ; 0041c851
    PUSH EDI                            ; 0041c852
    SUB ESP,0x138                       ; 0041c853
    MOV ESI,dword ptr [ESP + 0x148]     ; 0041c859
    MOV EBX,dword ptr [ESP + 0x14c]     ; 0041c860
    PUSH EBX                            ; 0041c867
    PUSH 0xff                           ; 0041c868
    LEA EAX,[ESP + 0x8]                 ; 0041c86d
    PUSH EAX                            ; 0041c871
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0041c872
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 0041c877
    LEA EAX,[ESP + 0x134]               ; 0041c87a
    PUSH EAX                            ; 0041c881
    PUSH 0x579705                       ; 0041c882 | = " %d\n"
    PUSH EBX                            ; 0041c887
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0041c888
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0041c88d
    PUSH EBX                            ; 0041c890
    PUSH 0xff                           ; 0041c891
    LEA EAX,[ESP + 0x8]                 ; 0041c896
    PUSH EAX                            ; 0041c89a
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0041c89b
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_00564b20()
    ADD ESP,0xc                         ; 0041c8a0
    LEA EAX,[ESP + 0x12c]               ; 0041c8a3
    PUSH EAX                            ; 0041c8aa
    LEA EAX,[ESP + 0x12c]               ; 0041c8ab
    PUSH EAX                            ; 0041c8b2
    LEA EAX,[ESP + 0x12c]               ; 0041c8b3
    PUSH EAX                            ; 0041c8ba
    PUSH 0x57970a                       ; 0041c8bb | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041c8c0
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0041c8c1
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0041c8c6
    LEA EAX,[ESP + 0x11c]               ; 0041c8c9
    PUSH EAX                            ; 0041c8d0
    LEA EAX,[ESP + 0x124]               ; 0041c8d1
    PUSH EAX                            ; 0041c8d8
    LEA EAX,[ESP + 0x120]               ; 0041c8d9
    PUSH EAX                            ; 0041c8e0
    PUSH 0x579715                       ; 0041c8e1 | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041c8e6
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0041c8e7
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0041c8ec
    LEA EAX,[ESP + 0x108]               ; 0041c8ef
    PUSH EAX                            ; 0041c8f6
    LEA EAX,[ESP + 0x108]               ; 0041c8f7
    PUSH EAX                            ; 0041c8fe
    LEA EAX,[ESP + 0x108]               ; 0041c8ff
    PUSH EAX                            ; 0041c906
    PUSH 0x579720                       ; 0041c907 | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041c90c
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0041c90d
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0041c912
    LEA EAX,[ESP + 0x130]               ; 0041c915
    PUSH EAX                            ; 0041c91c
    PUSH 0x57972b                       ; 0041c91d | = " %f\n"
    PUSH EBX                            ; 0041c922
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0041c923
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0041c928
    LEA EAX,[ESP + 0x100]               ; 0041c92b
    PUSH dword ptr [ESP + 0x130]        ; 0041c932
    PUSH EAX                            ; 0041c939
    LEA EAX,[ESP + 0x120]               ; 0041c93a
    PUSH EAX                            ; 0041c941
    LEA EAX,[ESP + 0x130]               ; 0041c942
    PUSH EAX                            ; 0041c949
    PUSH ESI                            ; 0041c94a
    CALL core_box.cpp_CBox_setupCorners_FUN_0041a6e0 ; 0041c94b
        ;   XREF to: 0041a6e0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBox_setupCorners_FUN_0041a6e0()
    ADD ESP,0x14                        ; 0041c950
    LEA EAX,[ESI + 0x54]                ; 0041c953
    PUSH EAX                            ; 0041c956
    LEA EAX,[ESI + 0x50]                ; 0041c957
    PUSH EAX                            ; 0041c95a
    LEA EDI,[ESI + 0x4c]                ; 0041c95b
    PUSH EDI                            ; 0041c95e
    PUSH 0x579730                       ; 0041c95f | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041c964
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0041c965
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0041c96a
    LEA EAX,[ESI + 0x78]                ; 0041c96d
    PUSH EAX                            ; 0041c970
    LEA EAX,[ESI + 0x74]                ; 0041c971
    PUSH EAX                            ; 0041c974
    LEA EAX,[ESI + 0x70]                ; 0041c975
    PUSH EAX                            ; 0041c978
    PUSH 0x57973b                       ; 0041c979 | = " %f,%f,%f\n"
    PUSH EBX                            ; 0041c97e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0041c97f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x14                        ; 0041c984
    LEA EAX,[ESI + 0x254]               ; 0041c987
    PUSH EAX                            ; 0041c98d
    PUSH 0x579746                       ; 0041c98e | = " %d\n"
    PUSH EBX                            ; 0041c993
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0041c994
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0xc                         ; 0041c999
    PUSH EDI                            ; 0041c99c
    LEA EAX,[ESP + 0x110]               ; 0041c99d
    PUSH EAX                            ; 0041c9a4
    LEA EAX,[ESI + 0x18]                ; 0041c9a5
    PUSH EAX                            ; 0041c9a8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0041c9a9
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESI,0x40                        ; 0041c9ae
    ADD ESP,0xc                         ; 0041c9b1
    CMP ESI,EAX                         ; 0041c9b4
    JNZ 0x0041c9c2                      ; 0041c9b6
        ;   XREF to: 0041c9c2 (CONDITIONAL_JUMP)  ; LAB_0041c9c2
    ADD ESP,0x138                       ; 0041c9b8
    POP EDI                             ; 0041c9be
    POP ESI                             ; 0041c9bf
    POP EBX                             ; 0041c9c0
    RET                                 ; 0041c9c1
    MOV EDX,dword ptr [EAX]             ; 0041c9c2
        ;   Label: LAB_0041c9c2
    MOV dword ptr [ESI],EDX             ; 0041c9c4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041c9c6
    MOV dword ptr [ESI + 0x4],EDX       ; 0041c9c9
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041c9cc
    MOV dword ptr [ESI + 0x8],EDX       ; 0041c9cf
    ADD ESP,0x138                       ; 0041c9d2
    POP EDI                             ; 0041c9d8
    POP ESI                             ; 0041c9d9
    POP EBX                             ; 0041c9da
    RET                                 ; 0041c9db


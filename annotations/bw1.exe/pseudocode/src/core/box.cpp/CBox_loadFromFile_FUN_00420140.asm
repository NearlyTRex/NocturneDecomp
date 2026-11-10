; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_loadFromFile_FUN_00420140(CBox *this_ptr,_FILE *file_handle)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_actor.cpp_archiveBox_FUN_0040bbf0 at 0040bc29
;
; Referenced Globals:
;   undefined4 DAT_005d4b00
;   TerminatedCString s_f_f_f_005d4b05
;   TerminatedCString s_f_f_f_005d4b10
;   TerminatedCString s_f_f_f_005d4b1b
;   undefined4 DAT_005d4b26
;   TerminatedCString s_f_f_f_005d4b2b
;   TerminatedCString s_f_f_f_005d4b36
;   undefined4 DAT_005d4b41
;
; Called Functions:
;   core_box.cpp_CBox_setupCorners_FUN_0041dac0
;   core_dirmat.cpp_FUN_0045f690
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fscanf_FUN_005c04b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420140
        ;   Label: core_box.cpp_CBox_loadFromFile_FUN_00420140
    PUSH ESI                            ; 00420141
    PUSH EDI                            ; 00420142
    SUB ESP,0x144                       ; 00420143
    MOV EBX,dword ptr [ESP + 0x154]     ; 00420149
    MOV ESI,dword ptr [ESP + 0x158]     ; 00420150
    PUSH ESI                            ; 00420157
    PUSH 0xff                           ; 00420158
    LEA EAX,[ESP + 0x8]                 ; 0042015d
    PUSH EAX                            ; 00420161
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 00420162
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 00420167
    LEA EAX,[ESP + 0x13c]               ; 0042016a
    PUSH EAX                            ; 00420171
    PUSH 0x5d4b00                       ; 00420172 | DAT_005d4b00
    PUSH ESI                            ; 00420177
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00420178
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 0042017d
    PUSH ESI                            ; 00420180
    PUSH 0xff                           ; 00420181
    LEA EAX,[ESP + 0x8]                 ; 00420186
    PUSH EAX                            ; 0042018a
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 0042018b
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005c1180()
    ADD ESP,0xc                         ; 00420190
    LEA EAX,[ESP + 0x138]               ; 00420193
    PUSH EAX                            ; 0042019a
    LEA EAX,[ESP + 0x138]               ; 0042019b
    PUSH EAX                            ; 004201a2
    LEA EAX,[ESP + 0x138]               ; 004201a3
    PUSH EAX                            ; 004201aa
    PUSH 0x5d4b05                       ; 004201ab | = " %f,%f,%f\n"
    PUSH ESI                            ; 004201b0
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004201b1
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 004201b6
    LEA EAX,[ESP + 0x110]               ; 004201b9
    PUSH EAX                            ; 004201c0
    LEA EAX,[ESP + 0x118]               ; 004201c1
    PUSH EAX                            ; 004201c8
    LEA EAX,[ESP + 0x114]               ; 004201c9
    PUSH EAX                            ; 004201d0
    PUSH 0x5d4b10                       ; 004201d1 | = " %f,%f,%f\n"
    PUSH ESI                            ; 004201d6
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004201d7
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 004201dc
    LEA EAX,[ESP + 0x120]               ; 004201df
    PUSH EAX                            ; 004201e6
    LEA EAX,[ESP + 0x120]               ; 004201e7
    PUSH EAX                            ; 004201ee
    LEA EAX,[ESP + 0x120]               ; 004201ef
    PUSH EAX                            ; 004201f6
    PUSH 0x5d4b1b                       ; 004201f7 | = " %f,%f,%f\n"
    PUSH ESI                            ; 004201fc
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 004201fd
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 00420202
    LEA EAX,[ESP + 0x140]               ; 00420205
    PUSH EAX                            ; 0042020c
    PUSH 0x5d4b26                       ; 0042020d | DAT_005d4b26
    PUSH ESI                            ; 00420212
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00420213
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 00420218
    LEA EAX,[ESP + 0x118]               ; 0042021b
    PUSH dword ptr [ESP + 0x140]        ; 00420222
    PUSH EAX                            ; 00420229
    LEA EAX,[ESP + 0x114]               ; 0042022a
    PUSH EAX                            ; 00420231
    LEA EAX,[ESP + 0x13c]               ; 00420232
    PUSH EAX                            ; 00420239
    PUSH EBX                            ; 0042023a
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dac0 ; 0042023b
        ;   XREF to: 0041dac0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041dac0(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 00420240
    LEA EAX,[EBX + 0x54]                ; 00420243
    PUSH EAX                            ; 00420246
    LEA EAX,[EBX + 0x50]                ; 00420247
    PUSH EAX                            ; 0042024a
    LEA EDI,[EBX + 0x4c]                ; 0042024b
    PUSH EDI                            ; 0042024e
    PUSH 0x5d4b2b                       ; 0042024f | = " %f,%f,%f\n"
    PUSH ESI                            ; 00420254
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00420255
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 0042025a
    LEA EAX,[EBX + 0x78]                ; 0042025d
    PUSH EAX                            ; 00420260
    LEA EAX,[EBX + 0x74]                ; 00420261
    PUSH EAX                            ; 00420264
    LEA EAX,[EBX + 0x70]                ; 00420265
    PUSH EAX                            ; 00420268
    PUSH 0x5d4b36                       ; 00420269 | = " %f,%f,%f\n"
    PUSH ESI                            ; 0042026e
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 0042026f
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0x14                        ; 00420274
    LEA EAX,[EBX + 0x254]               ; 00420277
    PUSH EAX                            ; 0042027d
    PUSH 0x5d4b41                       ; 0042027e | DAT_005d4b41
    PUSH ESI                            ; 00420283
    CALL crt_stdio.c_fscanf_FUN_005c04b0 ; 00420284
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005c04b0()
    ADD ESP,0xc                         ; 00420289
    PUSH EDI                            ; 0042028c
    LEA EAX,[EBX + 0x18]                ; 0042028d
    LEA ESI,[ESP + 0x104]               ; 00420290
    PUSH EAX                            ; 00420297
    ADD EBX,0x40                        ; 00420298
    LEA EDI,[ESP + 0x12c]               ; 0042029b
    CALL core_dirmat.cpp_FUN_0045f690   ; 004202a2
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x108]               ; 004202a7
    ADD ESP,0x8                         ; 004202ae
    LEA EAX,[ESP + 0x124]               ; 004202b1
    MOVSD ES:EDI,ESI                    ; 004202b8
    MOVSD ES:EDI,ESI                    ; 004202b9
    MOVSD ES:EDI,ESI                    ; 004202ba
    CMP EBX,EAX                         ; 004202bb
    JNZ 0x004202c9                      ; 004202bd
        ;   XREF to: 004202c9 (CONDITIONAL_JUMP)  ; LAB_004202c9
    ADD ESP,0x144                       ; 004202bf
    POP EDI                             ; 004202c5
    POP ESI                             ; 004202c6
    POP EBX                             ; 004202c7
    RET                                 ; 004202c8
    MOV EAX,dword ptr [ESP + 0x124]     ; 004202c9
        ;   Label: LAB_004202c9
    MOV dword ptr [EBX],EAX             ; 004202d0
    MOV EAX,dword ptr [ESP + 0x128]     ; 004202d2
    MOV dword ptr [EBX + 0x4],EAX       ; 004202d9
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004202dc
    MOV dword ptr [EBX + 0x8],EAX       ; 004202e3
    ADD ESP,0x144                       ; 004202e6
    POP EDI                             ; 004202ec
    POP ESI                             ; 004202ed
    POP EBX                             ; 004202ee
    RET                                 ; 004202ef


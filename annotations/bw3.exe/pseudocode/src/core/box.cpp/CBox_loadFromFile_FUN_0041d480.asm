; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041d480(CBox *this_ptr,_FILE *file_handle)
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
;   core_actor.cpp_archiveBox_FUN_0040be30 at 0040be69
;
; Referenced Globals:
;   undefined4 DAT_005b73e9
;   TerminatedCString s_f_f_f_005b73ee
;   TerminatedCString s_f_f_f_005b73f9
;   TerminatedCString s_f_f_f_005b7404
;   undefined4 DAT_005b740f
;   TerminatedCString s_f_f_f_005b7414
;   TerminatedCString s_f_f_f_005b741f
;   undefined4 DAT_005b742a
;
; Called Functions:
;   core_box.cpp_CBox_setupCorners_FUN_0041ae00
;   core_dirmat.cpp_FUN_0045b800
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fscanf_FUN_005a3230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d480
        ;   Label: core_box.cpp_CBox_loadFromFile_FUN_0041d480
    PUSH ESI                            ; 0041d481
    PUSH EDI                            ; 0041d482
    SUB ESP,0x144                       ; 0041d483
    MOV EBX,dword ptr [ESP + 0x154]     ; 0041d489
    MOV ESI,dword ptr [ESP + 0x158]     ; 0041d490
    PUSH ESI                            ; 0041d497
    PUSH 0xff                           ; 0041d498
    LEA EAX,[ESP + 0x8]                 ; 0041d49d
    PUSH EAX                            ; 0041d4a1
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0041d4a2
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0041d4a7
    LEA EAX,[ESP + 0x13c]               ; 0041d4aa
    PUSH EAX                            ; 0041d4b1
    PUSH 0x5b73e9                       ; 0041d4b2 | DAT_005b73e9
    PUSH ESI                            ; 0041d4b7
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0041d4b8
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0041d4bd
    PUSH ESI                            ; 0041d4c0
    PUSH 0xff                           ; 0041d4c1
    LEA EAX,[ESP + 0x8]                 ; 0041d4c6
    PUSH EAX                            ; 0041d4ca
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 0041d4cb
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 0041d4d0
    LEA EAX,[ESP + 0x138]               ; 0041d4d3
    PUSH EAX                            ; 0041d4da
    LEA EAX,[ESP + 0x138]               ; 0041d4db
    PUSH EAX                            ; 0041d4e2
    LEA EAX,[ESP + 0x138]               ; 0041d4e3
    PUSH EAX                            ; 0041d4ea
    PUSH 0x5b73ee                       ; 0041d4eb | = " %f,%f,%f\n"
    PUSH ESI                            ; 0041d4f0
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0041d4f1
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 0041d4f6
    LEA EAX,[ESP + 0x110]               ; 0041d4f9
    PUSH EAX                            ; 0041d500
    LEA EAX,[ESP + 0x118]               ; 0041d501
    PUSH EAX                            ; 0041d508
    LEA EAX,[ESP + 0x114]               ; 0041d509
    PUSH EAX                            ; 0041d510
    PUSH 0x5b73f9                       ; 0041d511 | = " %f,%f,%f\n"
    PUSH ESI                            ; 0041d516
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0041d517
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 0041d51c
    LEA EAX,[ESP + 0x120]               ; 0041d51f
    PUSH EAX                            ; 0041d526
    LEA EAX,[ESP + 0x120]               ; 0041d527
    PUSH EAX                            ; 0041d52e
    LEA EAX,[ESP + 0x120]               ; 0041d52f
    PUSH EAX                            ; 0041d536
    PUSH 0x5b7404                       ; 0041d537 | = " %f,%f,%f\n"
    PUSH ESI                            ; 0041d53c
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0041d53d
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 0041d542
    LEA EAX,[ESP + 0x140]               ; 0041d545
    PUSH EAX                            ; 0041d54c
    PUSH 0x5b740f                       ; 0041d54d | DAT_005b740f
    PUSH ESI                            ; 0041d552
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0041d553
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0041d558
    LEA EAX,[ESP + 0x118]               ; 0041d55b
    PUSH dword ptr [ESP + 0x140]        ; 0041d562
    PUSH EAX                            ; 0041d569
    LEA EAX,[ESP + 0x114]               ; 0041d56a
    PUSH EAX                            ; 0041d571
    LEA EAX,[ESP + 0x13c]               ; 0041d572
    PUSH EAX                            ; 0041d579
    PUSH EBX                            ; 0041d57a
    CALL core_box.cpp_CBox_setupCorners_FUN_0041ae00 ; 0041d57b
        ;   XREF to: 0041ae00 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_setupCorners_FUN_0041ae00(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
    ADD ESP,0x14                        ; 0041d580
    LEA EAX,[EBX + 0x54]                ; 0041d583
    PUSH EAX                            ; 0041d586
    LEA EAX,[EBX + 0x50]                ; 0041d587
    PUSH EAX                            ; 0041d58a
    LEA EDI,[EBX + 0x4c]                ; 0041d58b
    PUSH EDI                            ; 0041d58e
    PUSH 0x5b7414                       ; 0041d58f | = " %f,%f,%f\n"
    PUSH ESI                            ; 0041d594
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0041d595
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 0041d59a
    LEA EAX,[EBX + 0x78]                ; 0041d59d
    PUSH EAX                            ; 0041d5a0
    LEA EAX,[EBX + 0x74]                ; 0041d5a1
    PUSH EAX                            ; 0041d5a4
    LEA EAX,[EBX + 0x70]                ; 0041d5a5
    PUSH EAX                            ; 0041d5a8
    PUSH 0x5b741f                       ; 0041d5a9 | = " %f,%f,%f\n"
    PUSH ESI                            ; 0041d5ae
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0041d5af
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0x14                        ; 0041d5b4
    LEA EAX,[EBX + 0x254]               ; 0041d5b7
    PUSH EAX                            ; 0041d5bd
    PUSH 0x5b742a                       ; 0041d5be | DAT_005b742a
    PUSH ESI                            ; 0041d5c3
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0041d5c4
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 0041d5c9
    PUSH EDI                            ; 0041d5cc
    LEA EAX,[EBX + 0x18]                ; 0041d5cd
    LEA ESI,[ESP + 0x104]               ; 0041d5d0
    PUSH EAX                            ; 0041d5d7
    ADD EBX,0x40                        ; 0041d5d8
    LEA EDI,[ESP + 0x12c]               ; 0041d5db
    CALL core_dirmat.cpp_FUN_0045b800   ; 0041d5e2
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0x108]               ; 0041d5e7
    ADD ESP,0x8                         ; 0041d5ee
    LEA EAX,[ESP + 0x124]               ; 0041d5f1
    MOVSD ES:EDI,ESI                    ; 0041d5f8
    MOVSD ES:EDI,ESI                    ; 0041d5f9
    MOVSD ES:EDI,ESI                    ; 0041d5fa
    CMP EBX,EAX                         ; 0041d5fb
    JNZ 0x0041d609                      ; 0041d5fd
        ;   XREF to: 0041d609 (CONDITIONAL_JUMP)  ; LAB_0041d609
    ADD ESP,0x144                       ; 0041d5ff
    POP EDI                             ; 0041d605
    POP ESI                             ; 0041d606
    POP EBX                             ; 0041d607
    RET                                 ; 0041d608
    MOV EAX,dword ptr [ESP + 0x124]     ; 0041d609
        ;   Label: LAB_0041d609
    MOV dword ptr [EBX],EAX             ; 0041d610
    MOV EAX,dword ptr [ESP + 0x128]     ; 0041d612
    MOV dword ptr [EBX + 0x4],EAX       ; 0041d619
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0041d61c
    MOV dword ptr [EBX + 0x8],EAX       ; 0041d623
    ADD ESP,0x144                       ; 0041d626
    POP EDI                             ; 0041d62c
    POP ESI                             ; 0041d62d
    POP EBX                             ; 0041d62e
    RET                                 ; 0041d62f


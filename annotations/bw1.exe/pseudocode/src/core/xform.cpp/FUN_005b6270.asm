; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005b6270(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[19]:
;   core_charactr.cpp_CCharacter_archive_FUN_0042c7f0 at 0042caee
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0 at 00432a4c
;   core_doc.cpp_CDoc_renderOpaque_FUN_00471af0 at 00471e84
;   core_doc.cpp_FUN_0046f610 at 0046f70f
;   core_fire.cpp_CBulletHole_init_FUN_004ac3e0 at 004ac595
;   core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004c91b0 at 004c934f
;   core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_00503c90 at 00503fa4
;   core_mimic.cpp_CMimic_renderMirrored_FUN_00510620 at 00510801
;   core_platfrm.cpp_FUN_0053aef0 at 0053afca
;   core_scat.cpp_FUN_00542f20 at 00543044
;   ... and 9 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005b6270
        ;   Label: core_xform.cpp_FUN_005b6270
    SUB ESP,0x14                        ; 005b6271
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005b6274
    MOV EAX,ESI                         ; 005b6278
    MOV ECX,dword ptr [EDX + 0xc]       ; 005b627a
    MOV dword ptr [ESP + 0xc],ECX       ; 005b627d
    MOV ECX,dword ptr [EDX + 0x1c]      ; 005b6281
    MOV EDX,dword ptr [EDX + 0x2c]      ; 005b6284
    MOV EDI,ESI                         ; 005b6287
    MOV dword ptr [ESP + 0x10],EDX      ; 005b6289
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b628d
    MOV ESI,ESP                         ; 005b6291
    MOV dword ptr [ESP],EDX             ; 005b6293
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b6296
    MOV dword ptr [ESP + 0x4],ECX       ; 005b629a
    MOV dword ptr [ESP + 0x8],EDX       ; 005b629e
    MOVSD ES:EDI,ESI                    ; 005b62a2
    MOVSD ES:EDI,ESI                    ; 005b62a3
    MOVSD ES:EDI,ESI                    ; 005b62a4
    ADD ESP,0x14                        ; 005b62a5
    POP EDI                             ; 005b62a8
    RET                                 ; 005b62a9


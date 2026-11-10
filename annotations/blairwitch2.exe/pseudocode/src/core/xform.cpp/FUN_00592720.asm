; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00592720(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[18]:
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30 at 00428f8c
;   core_charactr.cpp_FUN_0042b620 at 0042b685
;   core_doc.cpp_CDoc_renderOpaque_FUN_004599a0 at 00459b9f
;   core_doc.cpp_FUN_004567c0 at 004568b3
;   core_fire.cpp_CBulletHole_init_FUN_00493a40 at 00493bf5
;   core_gabriela.cpp_CGabriella_updateWeaponPosition_FUN_004b0210 at 004b03cb
;   core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_004e5080 at 004e5394
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890 at 004f1a71
;   core_platfrm.cpp_FUN_00519ba0 at 00519c7a
;   core_scat.cpp_FUN_00520df0 at 00520f14
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00592720
        ;   Label: core_xform.cpp_FUN_00592720
    SUB ESP,0x14                        ; 00592721
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00592724
    MOV EAX,ESI                         ; 00592728
    MOV ECX,dword ptr [EDX + 0xc]       ; 0059272a
    MOV dword ptr [ESP + 0xc],ECX       ; 0059272d
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00592731
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00592734
    MOV EDI,ESI                         ; 00592737
    MOV dword ptr [ESP + 0x10],EDX      ; 00592739
    MOV EDX,dword ptr [ESP + 0xc]       ; 0059273d
    MOV ESI,ESP                         ; 00592741
    MOV dword ptr [ESP],EDX             ; 00592743
    MOV EDX,dword ptr [ESP + 0x10]      ; 00592746
    MOV dword ptr [ESP + 0x4],ECX       ; 0059274a
    MOV dword ptr [ESP + 0x8],EDX       ; 0059274e
    MOVSD ES:EDI,ESI                    ; 00592752
    MOVSD ES:EDI,ESI                    ; 00592753
    MOVSD ES:EDI,ESI                    ; 00592754
    ADD ESP,0x14                        ; 00592755
    POP EDI                             ; 00592758
    RET                                 ; 00592759


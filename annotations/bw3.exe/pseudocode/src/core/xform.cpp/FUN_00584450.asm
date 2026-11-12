; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_00584450(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[13]:
;   core_charactr.cpp_CCharacter_archive_FUN_0042b450 at 0042b847
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00431d10 at 00431e6c
;   core_fire.cpp_FUN_00497290 at 0049744f
;   core_platfrm.cpp_FUN_00512be0 at 00512cba
;   core_prye.cpp_CPrye_renderOpaque_FUN_005220d0 at 005224aa
;   core_prye.cpp_FUN_0051f360 at 0051f45f
;   core_skeleton.cpp_FUN_005496c0 at 00549717
;   core_skeleton.cpp_FUN_005498ce at 00549917
;   core_tawiscara.cpp_CTawiscara_renderTransparent_FUN_00595d20 at 00595dd0
;   core_toxhand.cpp_CTheHand_attractActorToward_FUN_0056ca00 at 0056cb0a
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00584450
        ;   Label: core_xform.cpp_FUN_00584450
    SUB ESP,0x14                        ; 00584451
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00584454
    MOV EAX,ESI                         ; 00584458
    MOV ECX,dword ptr [EDX + 0xc]       ; 0058445a
    MOV dword ptr [ESP + 0xc],ECX       ; 0058445d
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00584461
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00584464
    MOV EDI,ESI                         ; 00584467
    MOV dword ptr [ESP + 0x10],EDX      ; 00584469
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058446d
    MOV ESI,ESP                         ; 00584471
    MOV dword ptr [ESP],EDX             ; 00584473
    MOV EDX,dword ptr [ESP + 0x10]      ; 00584476
    MOV dword ptr [ESP + 0x4],ECX       ; 0058447a
    MOV dword ptr [ESP + 0x8],EDX       ; 0058447e
    MOVSD ES:EDI,ESI                    ; 00584482
    MOVSD ES:EDI,ESI                    ; 00584483
    MOVSD ES:EDI,ESI                    ; 00584484
    ADD ESP,0x14                        ; 00584485
    POP EDI                             ; 00584488
    RET                                 ; 00584489


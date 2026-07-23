; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_handleInput_FUN_00474ea0 at 004750d5
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057ed88
;   TerminatedCString s_CStrList_copyToClipboard_0057ed9e
;   TerminatedCString s_s_0057eddf
;   undefined4 DAT_005b6d50
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_004c8440
;   shape_edittool.cpp_CEditorTools_setClipboardText_FUN_00472d10
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;   shape_memdbg.cpp_free_FUN_00564486
;   shape_memdbg.cpp_malloc_FUN_00564c18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00474380
        ;   Label: shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380
    PUSH ESI                            ; 00474381
    PUSH EDI                            ; 00474382
    PUSH EBP                            ; 00474383
    SUB ESP,0x4                         ; 00474384
    MOV EBX,dword ptr [ESP + 0x18]      ; 00474387
    MOV EDX,dword ptr [EBX]             ; 0047438b
    XOR ESI,ESI                         ; 0047438d
    XOR EBP,EBP                         ; 0047438f
    TEST EDX,EDX                        ; 00474391
    JLE 0x004743c0                      ; 00474393
        ;   XREF to: 004743c0 (CONDITIONAL_JUMP)  ; LAB_004743c0
    PUSH ESI                            ; 00474395
        ;   Label: LAB_00474395
    PUSH EBX                            ; 00474396
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 00474397
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getStringAt_FUN_00474080()
    ADD ESP,0x8                         ; 0047439c
    MOV EDI,EAX                         ; 0047439f
    SUB ECX,ECX                         ; 004743a1
    DEC ECX                             ; 004743a3
    XOR EAX,EAX                         ; 004743a4
    SCASB.REPNE ES:EDI                  ; 004743a6
    NOT ECX                             ; 004743a8
    DEC ECX                             ; 004743aa
    INC ECX                             ; 004743ab
    INC ESI                             ; 004743ac
    ADD EBP,ECX                         ; 004743ad
    CMP ESI,dword ptr [EBX]             ; 004743af
    JL 0x00474395                       ; 004743b1
        ;   XREF to: 00474395 (CONDITIONAL_JUMP)  ; LAB_00474395
    LEA EAX,[EAX]                       ; 004743b3
    LEA EDX,[EDX]                       ; 004743b9
    NOP                                 ; 004743bf
    INC EBP                             ; 004743c0
        ;   Label: LAB_004743c0
    PUSH EBP                            ; 004743c1
    CALL shape_memdbg.cpp_malloc_FUN_00564c18 ; 004743c2
        ;   XREF to: 00564c18 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_malloc_FUN_00564c18()
    ADD ESP,0x4                         ; 004743c7
    MOV dword ptr [ESP],EAX             ; 004743ca
    TEST EAX,EAX                        ; 004743cd
    JNZ 0x004743f8                      ; 004743cf
        ;   XREF to: 004743f8 (CONDITIONAL_JUMP)  ; LAB_004743f8
    PUSH EBP                            ; 004743d1
    MOV EBP,dword ptr [EBX]             ; 004743d2
    PUSH EBP                            ; 004743d4
    MOV ESI,0x57ed88                    ; 004743d5 | = "..\\shape\\edittool.cpp"
    MOV EDI,0xad9                       ; 004743da
    PUSH 0x57ed9e                       ; 004743df | = "CStrList::copyToClipboard - out of me..."
    MOV dword ptr [0x01cc4800],ESI      ; 004743e4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004743ea | DAT_01cc4804
    CALL FUN_004c8440                   ; 004743f0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 004743f5
    MOV EDI,dword ptr [ESP]             ; 004743f8
        ;   Label: LAB_004743f8
    MOV EAX,dword ptr [EBX]             ; 004743fb
    XOR ESI,ESI                         ; 004743fd
    TEST EAX,EAX                        ; 004743ff
    JLE 0x00474430                      ; 00474401
        ;   XREF to: 00474430 (CONDITIONAL_JUMP)  ; LAB_00474430
    PUSH ESI                            ; 00474403
        ;   Label: LAB_00474403
    PUSH EBX                            ; 00474404
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 00474405
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getStringAt_FUN_00474080()
    ADD ESP,0x8                         ; 0047440a
    PUSH EAX                            ; 0047440d
    PUSH 0x57eddf                       ; 0047440e | = "%s\n"
    PUSH EDI                            ; 00474413
    INC ESI                             ; 00474414
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00474415
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0047441a
    MOV EDX,dword ptr [EBX]             ; 0047441d
    ADD EDI,EAX                         ; 0047441f
    CMP ESI,EDX                         ; 00474421
    JL 0x00474403                       ; 00474423
        ;   XREF to: 00474403 (CONDITIONAL_JUMP)  ; LAB_00474403
    LEA EAX,[EAX]                       ; 00474425
    LEA EDX,[EDX]                       ; 0047442b
    MOV EBX,EBX                         ; 0047442e
    MOV ECX,dword ptr [ESP]             ; 00474430
        ;   Label: LAB_00474430
    PUSH ECX                            ; 00474433
    MOV EBX,dword ptr [0x005b6d50]      ; 00474434 | DAT_005b6d50
    PUSH EBX                            ; 0047443a
    MOV byte ptr [EDI],0x0              ; 0047443b
    CALL shape_edittool.cpp_CEditorTools_setClipboardText_FUN_00472d10 ; 0047443e
        ;   XREF to: 00472d10 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_setClipboardText_FUN_00472d10()
    ADD ESP,0x8                         ; 00474443
    MOV ESI,dword ptr [ESP]             ; 00474446
    PUSH ESI                            ; 00474449
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 0047444a
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 0047444f
    ADD ESP,0x4                         ; 00474452
    POP EBP                             ; 00474455
    POP EDI                             ; 00474456
    POP ESI                             ; 00474457
    POP EBX                             ; 00474458
    RET                                 ; 00474459


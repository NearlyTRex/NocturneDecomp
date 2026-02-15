; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_004824f0(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x48]:1  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004825c0 at 00482811
;   core_dpart.cpp_CDemonPart_processAndFinalize_FUN_00482e40 at 00482f6e
;
; Called Functions:
;   engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004824f0
        ;   Label: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_004824f0
    PUSH EDI                            ; 004824f1
    PUSH EBP                            ; 004824f2
    SUB ESP,0x3c                        ; 004824f3
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004824f6
    MOV EDX,dword ptr [ESI + 0x24]      ; 004824fa
    XOR EDI,EDI                         ; 004824fd
    TEST EDX,EDX                        ; 004824ff
    JLE 0x004825b2                      ; 00482501
        ;   XREF to: 004825b2 (CONDITIONAL_JUMP)  ; LAB_004825b2
    PUSH EBX                            ; 00482507
    XOR EBX,EBX                         ; 00482508
    MOV dword ptr [ESP + 0x8],0x3       ; 0048250a
        ;   Label: LAB_0048250a
    MOV EAX,dword ptr [ESI + 0x34]      ; 00482512
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00482515
    MOV dword ptr [ESP + 0xc],EAX       ; 00482518
    MOV EAX,dword ptr [ESI + 0x34]      ; 0048251c
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0048251f
    MOV dword ptr [ESP + 0x10],EAX      ; 00482523
    MOV EAX,dword ptr [ESI + 0x34]      ; 00482527
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0048252a
    MOV dword ptr [ESP + 0x14],EAX      ; 0048252e
    MOV EAX,dword ptr [ESI + 0x34]      ; 00482532
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 00482535
    MOV dword ptr [ESP + 0x18],EAX      ; 00482539
    MOV EAX,dword ptr [ESI + 0x34]      ; 0048253d
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 00482540
    MOV dword ptr [ESP + 0x1c],EAX      ; 00482544
    MOV EAX,dword ptr [ESI + 0x34]      ; 00482548
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14] ; 0048254b
    MOV dword ptr [ESP + 0x28],EAX      ; 0048254f
    MOV EAX,dword ptr [ESI + 0x34]      ; 00482553
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x18] ; 00482556
    MOV dword ptr [ESP + 0x34],EAX      ; 0048255a
    LEA EAX,[ESP + 0x4]                 ; 0048255e
    PUSH EAX                            ; 00482562
    MOV EBP,dword ptr [ESI + 0x2c]      ; 00482563
    PUSH EBP                            ; 00482566
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0 ; 00482567
        ;   XREF to: 00501bc0 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_00501bc0(CVector3i * vertex_data, SSurfaceNormal * output)
    MOV EAX,dword ptr [ESI + 0x34]      ; 0048256c
    ADD ESP,0x8                         ; 0048256f
    LEA EDX,[EAX + EBX*0x1]             ; 00482572
    MOV EAX,dword ptr [ESP + 0xc]       ; 00482575
    MOV dword ptr [EDX],EAX             ; 00482579
    MOV EAX,dword ptr [ESI + 0x34]      ; 0048257b
    LEA EDX,[EAX + EBX*0x1]             ; 0048257e
    MOV EAX,dword ptr [ESP + 0x10]      ; 00482581
    MOV dword ptr [EDX + 0x4],EAX       ; 00482585
    MOV EAX,dword ptr [ESI + 0x34]      ; 00482588
    LEA EDX,[EAX + EBX*0x1]             ; 0048258b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048258e
    MOV dword ptr [EDX + 0x8],EAX       ; 00482592
    MOV EAX,dword ptr [ESI + 0x34]      ; 00482595
    LEA EDX,[EAX + EBX*0x1]             ; 00482598
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048259b
    MOV dword ptr [EDX + 0xc],EAX       ; 0048259f
    INC EDI                             ; 004825a2
    MOV EAX,dword ptr [ESI + 0x24]      ; 004825a3
    ADD EBX,0x20                        ; 004825a6
    CMP EDI,EAX                         ; 004825a9
    JL 0x0048250a                       ; 004825ab
        ;   XREF to: 0048250a (CONDITIONAL_JUMP)  ; LAB_0048250a
    POP EBX                             ; 004825b1
    ADD ESP,0x3c                        ; 004825b2
        ;   Label: LAB_004825b2
    POP EBP                             ; 004825b5
    POP EDI                             ; 004825b6
    POP ESI                             ; 004825b7
    RET                                 ; 004825b8


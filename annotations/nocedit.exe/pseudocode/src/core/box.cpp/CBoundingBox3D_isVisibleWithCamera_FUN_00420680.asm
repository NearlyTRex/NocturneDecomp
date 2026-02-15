; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 at 004204fa
;
; Referenced Globals:
;   float g_BoundingBoxWorldToIntegerScale = 256
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonCamera* g_CurrentSceneCamera
;   CDemonRenderer g_CDemonRendererInstance
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;   CMatrix3x3i g_InverseMatrix
;   undefined4 g_InverseMatrix[0][1]
;   undefined4 g_InverseMatrix[0][2]
;   undefined4 g_InverseMatrix[1][0]
;   undefined4 g_InverseMatrix[1][1]
;   undefined4 g_InverseMatrix[1][2]
;   undefined4 g_InverseMatrix[2][0]
;   undefined4 g_InverseMatrix[2][1]
;   ... and 1 more
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420680
        ;   Label: core_box.cpp_CBoundingBox3D_isVisibleWithCamera_FUN_00420680
    PUSH ESI                            ; 00420681
    PUSH EDI                            ; 00420682
    PUSH EBP                            ; 00420683
    SUB ESP,0x84                        ; 00420684
    MOV EBP,0xff                        ; 0042068a
    XOR ESI,ESI                         ; 0042068f
    XOR EDI,EDI                         ; 00420691
    PUSH ESI                            ; 00420693
        ;   Label: LAB_00420693
    LEA EAX,[ESP + 0x64]                ; 00420694
    PUSH EAX                            ; 00420698
    MOV EDX,dword ptr [ESP + 0xa0]      ; 00420699
    PUSH EDX                            ; 004206a0
    LEA EBX,[ESP + 0x78]                ; 004206a1
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 004206a5
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
    ADD ESP,0xc                         ; 004206aa
    LEA EAX,[ESP + 0x60]                ; 004206ad
    MOV ECX,dword ptr [0x006703ec]      ; 004206b1 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 004206b7
    FMUL float ptr [0x0065b160]         ; 004206b9 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX]               ; 004206bf
    FLD float ptr [EAX + 0x4]           ; 004206c1
    FMUL float ptr [0x0065b160]         ; 004206c4 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x4]         ; 004206ca
    FLD float ptr [EAX + 0x8]           ; 004206cd
    FMUL float ptr [0x0065b160]         ; 004206d0 | g_BoundingBoxWorldToIntegerScale
    FISTP dword ptr [EBX + 0x8]         ; 004206d6
    LEA EAX,[ESP + 0x6c]                ; 004206d9
    PUSH EAX                            ; 004206dd
    MOV EAX,dword ptr [ECX]             ; 004206de | g_CDemonRendererInstance
    ADD EAX,EDI                         ; 004206e0
    PUSH EAX                            ; 004206e2
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 004206e3
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x006703ec]                ; 004206e8 | g_CDemonRendererPtr2
    MOV EAX,dword ptr [EAX]             ; 004206ed | g_CDemonRendererInstance
    ADD EAX,EDI                         ; 004206ef
    MOV DL,byte ptr [EAX + 0x13]        ; 004206f1
    ADD ESP,0x8                         ; 004206f4
    TEST DL,0x80                        ; 004206f7
    JZ 0x0042082b                       ; 004206fa
        ;   XREF to: 0042082b (CONDITIONAL_JUMP)  ; LAB_0042082b
    AND EBP,dword ptr [EAX + 0x10]      ; 00420700
    INC ESI                             ; 00420703
        ;   Label: LAB_00420703
    ADD EDI,0x30                        ; 00420704
    CMP ESI,0x8                         ; 00420707
    JL 0x00420693                       ; 0042070a
        ;   XREF to: 00420693 (CONDITIONAL_JUMP)  ; LAB_00420693
    TEST EBP,EBP                        ; 0042070c
    JNZ 0x00420832                      ; 0042070e
        ;   XREF to: 00420832 (CONDITIONAL_JUMP)  ; LAB_00420832
    XOR ESI,ESI                         ; 00420714
    XOR ECX,ECX                         ; 00420716
    MOV EAX,[0x006703ec]                ; 00420718 | g_CDemonRendererPtr2
        ;   Label: LAB_00420718
    MOV EDI,dword ptr [EAX]             ; 0042071d | g_CDemonRendererInstance
    MOV EAX,dword ptr [EDI + ESI*0x1]   ; 0042071f
    MOV dword ptr [ESP + 0x78],EAX      ; 00420722
    MOV EAX,dword ptr [EDI + ESI*0x1 + 0x4] ; 00420726
    MOV dword ptr [ESP + 0x7c],EAX      ; 0042072a
    MOV EAX,dword ptr [EDI + ESI*0x1 + 0x8] ; 0042072e
    MOV EDX,dword ptr [ESP + 0x78]      ; 00420732
    MOV dword ptr [ESP + 0x80],EAX      ; 00420736
    MOV EAX,[0x02f0d364]                ; 0042073d | g_InverseMatrix
    IMUL EDX                            ; 00420742
    SHRD EAX,EDX,0x10                   ; 00420744
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00420748
    MOV EDI,EAX                         ; 0042074c
    MOV EAX,[0x02f0d370]                ; 0042074e | g_InverseMatrix[1][0]
    IMUL EDX                            ; 00420753
    SHRD EAX,EDX,0x10                   ; 00420755
    MOV EDX,dword ptr [ESP + 0x80]      ; 00420759
    ADD EDI,EAX                         ; 00420760
    MOV EAX,[0x02f0d37c]                ; 00420762 | g_InverseMatrix[2][0]
    IMUL EDX                            ; 00420767
    SHRD EAX,EDX,0x10                   ; 00420769
    MOV EBX,dword ptr [0x02d052c4]      ; 0042076d | g_CameraOriginX
    ADD EAX,EDI                         ; 00420773
    ADD EAX,EBX                         ; 00420775
    MOV EDX,dword ptr [ESP + 0x78]      ; 00420777
    MOV dword ptr [ESP + ECX*0x1],EAX   ; 0042077b
    MOV EAX,[0x02f0d368]                ; 0042077e | g_InverseMatrix[0][1]
    IMUL EDX                            ; 00420783
    SHRD EAX,EDX,0x10                   ; 00420785
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00420789
    MOV EDI,EAX                         ; 0042078d
    MOV EAX,[0x02f0d374]                ; 0042078f | g_InverseMatrix[1][1]
    IMUL EDX                            ; 00420794
    SHRD EAX,EDX,0x10                   ; 00420796
    MOV EDX,dword ptr [ESP + 0x80]      ; 0042079a
    ADD EDI,EAX                         ; 004207a1
    MOV EAX,[0x02f0d380]                ; 004207a3 | g_InverseMatrix[2][1]
    IMUL EDX                            ; 004207a8
    SHRD EAX,EDX,0x10                   ; 004207aa
    ADD EAX,EDI                         ; 004207ae
    ADD EAX,dword ptr [0x02d052c8]      ; 004207b0 | g_CameraOriginY
    MOV EDX,dword ptr [ESP + 0x78]      ; 004207b6
    MOV dword ptr [ESP + ECX*0x1 + 0x4],EAX ; 004207ba
    MOV EAX,[0x02f0d36c]                ; 004207be | g_InverseMatrix[0][2]
    IMUL EDX                            ; 004207c3
    SHRD EAX,EDX,0x10                   ; 004207c5
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004207c9
    MOV EBX,EAX                         ; 004207cd
    MOV EAX,[0x02f0d378]                ; 004207cf | g_InverseMatrix[1][2]
    IMUL EDX                            ; 004207d4
    SHRD EAX,EDX,0x10                   ; 004207d6
    MOV EDX,dword ptr [ESP + 0x80]      ; 004207da
    ADD EBX,EAX                         ; 004207e1
    MOV EAX,[0x02f0d384]                ; 004207e3 | g_InverseMatrix[2][2]
    IMUL EDX                            ; 004207e8
    SHRD EAX,EDX,0x10                   ; 004207ea
    MOV EBP,dword ptr [0x02d052cc]      ; 004207ee | g_CameraOriginZ
    ADD EAX,EBX                         ; 004207f4
    ADD ECX,0xc                         ; 004207f6
    ADD EAX,EBP                         ; 004207f9
    ADD ESI,0x30                        ; 004207fb
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EAX ; 004207fe
    CMP ESI,0x180                       ; 00420802
    JNZ 0x00420718                      ; 00420808
        ;   XREF to: 00420718 (CONDITIONAL_JUMP)  ; LAB_00420718
    MOV EBX,ESP                         ; 0042080e
    MOV EAX,[0x00823a74]                ; 00420810 | g_CurrentSceneCamera
    PUSH EBX                            ; 00420815
    MOV ECX,dword ptr [EAX + 0x3c]      ; 00420816
    PUSH EAX                            ; 00420819
    CALL dword ptr [ECX + 0xc]          ; 0042081a
    ADD ESP,0x8                         ; 0042081d
    ADD ESP,0x84                        ; 00420820
    POP EBP                             ; 00420826
    POP EDI                             ; 00420827
    POP ESI                             ; 00420828
    POP EBX                             ; 00420829
    RET                                 ; 0042082a
    XOR EBP,EBP                         ; 0042082b
        ;   Label: LAB_0042082b
    JMP 0x00420703                      ; 0042082d
        ;   XREF to: 00420703 (UNCONDITIONAL_JUMP)  ; LAB_00420703
    XOR EAX,EAX                         ; 00420832
        ;   Label: LAB_00420832
    ADD ESP,0x84                        ; 00420834
    POP EBP                             ; 0042083a
    POP EDI                             ; 0042083b
    POP ESI                             ; 0042083c
    POP EBX                             ; 0042083d
    RET                                 ; 0042083e


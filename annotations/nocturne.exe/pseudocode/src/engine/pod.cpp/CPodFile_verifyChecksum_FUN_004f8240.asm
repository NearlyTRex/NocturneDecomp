; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_004f8240(CPodFile *this_ptr)
;
; Parameters:
; CPodFile *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_pod.cpp_FUN_004f9100 at 004f912e
;
; Referenced Globals:
;   undefined4 DAT_0058d9a8
;   TerminatedCString s_rb_0058d9a9
;   TerminatedCString s_Checking_individual_file_0058d9f1
;   TerminatedCString s_CRC_CHECK_FAILED_on_thes_0058da0f
;   TerminatedCString s_engine_pod_cpp_0058da35
;   TerminatedCString s_Invalid_pod_version_0058da47
;   TerminatedCString s_Verifying_CRC_for_s_0058da5c
;   TerminatedCString s_rb_0058da74
;   undefined4 DAT_005b6d50
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01e428d0
;   undefined4 DAT_01e428d1
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_fread_FUN_005636d0
;   crt_stdio.c_fseek_FUN_0056582c
;   engine_dosio.cpp_getFileSize_FUN_004568c0
;   engine_pod.cpp_CPodFile_computeFileCRC_FUN_004f86a0
;   engine_pod.cpp_crc32UpdateByte_FUN_004f77d0
;   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760
;   shape_edittool.cpp_CPickList_ctor_FUN_00474c90
;   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
;   shape_edittool.cpp_CPickList_dtor_FUN_00474cf0
;   shape_edittool.cpp_CStrList_add_FUN_00473cb0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8240
        ;   Label: engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240
    PUSH ESI                            ; 004f8241
    PUSH EDI                            ; 004f8242
    PUSH EBP                            ; 004f8243
    SUB ESP,0x188                       ; 004f8244
    MOV EBX,dword ptr [ESP + 0x19c]     ; 004f824a
    MOV EDX,dword ptr [EBX]             ; 004f8251
    TEST EDX,EDX                        ; 004f8253
    JZ 0x004f83fb                       ; 004f8255
        ;   XREF to: 004f83fb (CONDITIONAL_JUMP)  ; LAB_004f83fb
    CMP byte ptr [EBX + 0x4],0x0        ; 004f825b
    JZ 0x004f83fb                       ; 004f825f
        ;   XREF to: 004f83fb (CONDITIONAL_JUMP)  ; LAB_004f83fb
    CMP EDX,0x2                         ; 004f8265
    JGE 0x004f840a                      ; 004f8268
        ;   XREF to: 004f840a (CONDITIONAL_JUMP)  ; LAB_004f840a
    MOV ECX,dword ptr [EBX]             ; 004f826e
        ;   Label: LAB_004f826e
    CMP ECX,0x1                         ; 004f8270
    JNZ 0x004f8532                      ; 004f8273
        ;   XREF to: 004f8532 (CONDITIONAL_JUMP)  ; LAB_004f8532
    MOV dword ptr [ESP + 0x17c],0x54    ; 004f8279
    LEA ESI,[EBX + 0x4]                 ; 004f8284
        ;   Label: LAB_004f8284
    PUSH ESI                            ; 004f8287
    PUSH 0x58da5c                       ; 004f8288 | = "Verifying CRC for %s..."
    MOV ECX,dword ptr [0x005b6d50]      ; 004f828d | DAT_005b6d50
    PUSH ECX                            ; 004f8293
    CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0 ; 004f8294
        ;   XREF to: 0046fff0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0()
    ADD ESP,0xc                         ; 004f8299
    PUSH 0x58da74                       ; 004f829c | = "rb"
    PUSH ESI                            ; 004f82a1
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f82a2
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    MOV EBX,EAX                         ; 004f82a7
    ADD ESP,0x8                         ; 004f82a9
    TEST EAX,EAX                        ; 004f82ac
    JZ 0x004f83ee                       ; 004f82ae
        ;   XREF to: 004f83ee (CONDITIONAL_JUMP)  ; LAB_004f83ee
    MOV EAX,dword ptr [ESP + 0x17c]     ; 004f82b4
    PUSH 0x0                            ; 004f82bb
    SUB EAX,0x4                         ; 004f82bd
    PUSH EAX                            ; 004f82c0
    PUSH EBX                            ; 004f82c1
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f82c2
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004f82c7
    PUSH EBX                            ; 004f82ca
    PUSH 0x1                            ; 004f82cb
    PUSH 0x4                            ; 004f82cd
    LEA EAX,[ESP + 0x17c]               ; 004f82cf
    PUSH EAX                            ; 004f82d6
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f82d7
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f82dc
    PUSH EBX                            ; 004f82df
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f82e0
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f82e5
    PUSH ESI                            ; 004f82e8
    PUSH 0x58d9a8                       ; 004f82e9 | DAT_0058d9a8
    CALL engine_dosio.cpp_getFileSize_FUN_004568c0 ; 004f82ee
        ;   XREF to: 004568c0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_004568c0(char * directory, char * filename)
    ADD ESP,0x8                         ; 004f82f3
    MOV EBX,dword ptr [ESP + 0x17c]     ; 004f82f6
    PUSH 0x58d9a9                       ; 004f82fd | = "rb"
    SUB EAX,EBX                         ; 004f8302
    PUSH ESI                            ; 004f8304
    MOV dword ptr [ESP + 0x17c],EAX     ; 004f8305
    CALL crt_stdio.c_fopen_FUN_0056568c ; 004f830c
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f8311
    PUSH 0x0                            ; 004f8314
    PUSH EBX                            ; 004f8316
    PUSH EAX                            ; 004f8317
    MOV EBP,EAX                         ; 004f8318
    MOV dword ptr [ESP + 0x184],EAX     ; 004f831a
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004f8321
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 004f8326
    MOV EDI,dword ptr [ESP + 0x174]     ; 004f8329
    MOV EBX,0xffffffff                  ; 004f8330
    CMP EDI,0x10000                     ; 004f8335
    JL 0x004f8383                       ; 004f833b
        ;   XREF to: 004f8383 (CONDITIONAL_JUMP)  ; LAB_004f8383
    PUSH EBP                            ; 004f833d
        ;   Label: LAB_004f833d
    PUSH 0x1                            ; 004f833e
    PUSH 0x10000                        ; 004f8340
    PUSH 0x1e428d0                      ; 004f8345 | DAT_01e428d0
    MOV ESI,0x1e428d0                   ; 004f834a
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f834f
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f8354
    MOV EAX,EBX                         ; 004f8357
    XOR EBX,EBX                         ; 004f8359
    XOR EDX,EDX                         ; 004f835b
        ;   Label: LAB_004f835b
    MOV DL,byte ptr [ESI]               ; 004f835d | DAT_01e428d0 | DAT_01e428d1
    PUSH EDX                            ; 004f835f
    PUSH EAX                            ; 004f8360
    INC ESI                             ; 004f8361
    INC EBX                             ; 004f8362
    CALL engine_pod.cpp_crc32UpdateByte_FUN_004f77d0 ; 004f8363
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004f8368
    CMP EBX,0x10000                     ; 004f836b
    JC 0x004f835b                       ; 004f8371
        ;   XREF to: 004f835b (CONDITIONAL_JUMP)  ; LAB_004f835b
    SUB EDI,0x10000                     ; 004f8373
    MOV EBX,EAX                         ; 004f8379
    CMP EDI,0x10000                     ; 004f837b
    JGE 0x004f833d                      ; 004f8381
        ;   XREF to: 004f833d (CONDITIONAL_JUMP)  ; LAB_004f833d
    PUSH EBP                            ; 004f8383
        ;   Label: LAB_004f8383
    PUSH 0x1                            ; 004f8384
    PUSH EDI                            ; 004f8386
    PUSH 0x1e428d0                      ; 004f8387 | DAT_01e428d0
    MOV ESI,0x1e428d0                   ; 004f838c
    MOV EBP,EBX                         ; 004f8391
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004f8393
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004f8398
    XOR EBX,EBX                         ; 004f839b
    MOV dword ptr [ESP + 0x180],EDI     ; 004f839d
    TEST EDI,EDI                        ; 004f83a4
    JBE 0x004f83d0                      ; 004f83a6
        ;   XREF to: 004f83d0 (CONDITIONAL_JUMP)  ; LAB_004f83d0
    XOR EAX,EAX                         ; 004f83a8
        ;   Label: LAB_004f83a8
    MOV AL,byte ptr [ESI]               ; 004f83aa | DAT_01e428d0 | DAT_01e428d1
    PUSH EAX                            ; 004f83ac
    PUSH EBP                            ; 004f83ad
    INC ESI                             ; 004f83ae
    CALL engine_pod.cpp_crc32UpdateByte_FUN_004f77d0 ; 004f83af
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004f83b4
    INC EBX                             ; 004f83b7
    MOV EDX,dword ptr [ESP + 0x180]     ; 004f83b8
    MOV EBP,EAX                         ; 004f83bf
    CMP EBX,EDX                         ; 004f83c1
    JC 0x004f83a8                       ; 004f83c3
        ;   XREF to: 004f83a8 (CONDITIONAL_JUMP)  ; LAB_004f83a8
    LEA EAX,[EAX]                       ; 004f83c5
    LEA EDX,[EDX]                       ; 004f83cb
    MOV EBX,EBX                         ; 004f83ce
    MOV ECX,dword ptr [ESP + 0x178]     ; 004f83d0
        ;   Label: LAB_004f83d0
    PUSH ECX                            ; 004f83d7
    CALL crt_stdio.c_fclose_FUN_00563380 ; 004f83d8
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 004f83dd
    CMP EBP,dword ptr [ESP + 0x170]     ; 004f83e0
    SETZ AL                             ; 004f83e7
    XOR EBX,EBX                         ; 004f83ea
    MOV BL,AL                           ; 004f83ec
    MOV EAX,EBX                         ; 004f83ee
        ;   Label: LAB_004f83ee
    ADD ESP,0x188                       ; 004f83f0
    POP EBP                             ; 004f83f6
    POP EDI                             ; 004f83f7
    POP ESI                             ; 004f83f8
    POP EBX                             ; 004f83f9
    RET                                 ; 004f83fa
    XOR EBX,EBX                         ; 004f83fb
        ;   Label: LAB_004f83fb
    MOV EAX,EBX                         ; 004f83fd
    ADD ESP,0x188                       ; 004f83ff
    POP EBP                             ; 004f8405
    POP EDI                             ; 004f8406
    POP ESI                             ; 004f8407
    POP EBX                             ; 004f8408
    RET                                 ; 004f8409
    PUSH 0x58d9f1                       ; 004f840a | = "Checking individual file CRCs"
        ;   Label: LAB_004f840a
    MOV ESI,dword ptr [0x005b6d50]      ; 004f840f | DAT_005b6d50
    PUSH ESI                            ; 004f8415
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660 ; 004f8416
        ;   XREF to: 00471660 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 004f841b
    MOV EAX,ESP                         ; 004f841e
    PUSH EAX                            ; 004f8420
    XOR EDI,EDI                         ; 004f8421
    CALL shape_edittool.cpp_CPickList_ctor_FUN_00474c90 ; 004f8423
        ;   XREF to: 00474c90 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_00474c90(CPickList * this_ptr)
    MOV EBP,dword ptr [EBX + 0x208]     ; 004f8428
    ADD ESP,0x4                         ; 004f842e
    TEST EBP,EBP                        ; 004f8431
    JLE 0x004f84d9                      ; 004f8433
        ;   XREF to: 004f84d9 (CONDITIONAL_JUMP)  ; LAB_004f84d9
    XOR ESI,ESI                         ; 004f8439
    MOV EAX,dword ptr [EBX + 0x208]     ; 004f843b
        ;   Label: LAB_004f843b
    DEC EAX                             ; 004f8441
    IMUL ECX,EAX,0x14                   ; 004f8442
    MOV EAX,dword ptr [EBX + 0x20c]     ; 004f8445
    MOV EDX,dword ptr [ECX + EAX*0x1 + 0x8] ; 004f844b
    MOV EBP,dword ptr [ECX + EAX*0x1 + 0x4] ; 004f844f
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f8453
    ADD EDX,EBP                         ; 004f8456
    SUB EDX,ECX                         ; 004f8458
    MOV dword ptr [ESP + 0x184],EDX     ; 004f845a
    FILD dword ptr [ESP + 0x184]        ; 004f8461
    SUB ESP,0x4                         ; 004f8468
    LEA EDX,[EAX + ESI*0x1]             ; 004f846b
    FSTP float ptr [ESP]                ; 004f846e
    MOV EDX,dword ptr [EDX + 0x8]       ; 004f8471
    SUB EDX,ECX                         ; 004f8474
    MOV dword ptr [ESP + 0x188],EDX     ; 004f8476
    FILD dword ptr [ESP + 0x188]        ; 004f847d
    SUB ESP,0x4                         ; 004f8484
    MOV EAX,[0x005b6d50]                ; 004f8487 | DAT_005b6d50
    FSTP float ptr [ESP]                ; 004f848c
    PUSH EAX                            ; 004f848f
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760 ; 004f8490
        ;   XREF to: 00471760 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_00471760(CEditorTools * this_ptr, float current_progress, float total_progress)
    ADD ESP,0xc                         ; 004f8495
    PUSH EDI                            ; 004f8498
    PUSH EBX                            ; 004f8499
    MOV EBP,dword ptr [EBX + 0x20c]     ; 004f849a
    CALL engine_pod.cpp_CPodFile_computeFileCRC_FUN_004f86a0 ; 004f84a0
        ;   XREF to: 004f86a0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_CPodFile_computeFileCRC_FUN_004f86a0()
    MOV EDX,dword ptr [ESI + EBP*0x1 + 0x10] ; 004f84a5
    ADD ESP,0x8                         ; 004f84a9
    CMP EAX,EDX                         ; 004f84ac
    JZ 0x004f84c7                       ; 004f84ae
        ;   XREF to: 004f84c7 (CONDITIONAL_JUMP)  ; LAB_004f84c7
    MOV EAX,dword ptr [EBX + 0x20c]     ; 004f84b0
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 004f84b6
    PUSH ECX                            ; 004f84b9
    LEA EAX,[ESP + 0x4]                 ; 004f84ba
    PUSH EAX                            ; 004f84be
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 004f84bf
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00473cb0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 004f84c4
    INC EDI                             ; 004f84c7
        ;   Label: LAB_004f84c7
    MOV EBP,dword ptr [EBX + 0x208]     ; 004f84c8
    ADD ESI,0x14                        ; 004f84ce
    CMP EDI,EBP                         ; 004f84d1
    JL 0x004f843b                       ; 004f84d3
        ;   XREF to: 004f843b (CONDITIONAL_JUMP)  ; LAB_004f843b
    MOV EAX,[0x005b6d50]                ; 004f84d9 | DAT_005b6d50
        ;   Label: LAB_004f84d9
    PUSH EAX                            ; 004f84de
    CALL shape_edittool.cpp_FUN_004720c0 ; 004f84df
        ;   XREF to: 004720c0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_004720c0()
    ADD ESP,0x4                         ; 004f84e4
    MOV EDX,dword ptr [ESP]             ; 004f84e7
    TEST EDX,EDX                        ; 004f84ea
    JNZ 0x004f8501                      ; 004f84ec
        ;   XREF to: 004f8501 (CONDITIONAL_JUMP)  ; LAB_004f8501
    PUSH EDX                            ; 004f84ee
    LEA EAX,[ESP + 0x4]                 ; 004f84ef
    PUSH EAX                            ; 004f84f3
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004f84f4
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_00474cf0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f84f9
    JMP 0x004f826e                      ; 004f84fc
        ;   XREF to: 004f826e (UNCONDITIONAL_JUMP)  ; LAB_004f826e
    PUSH -0x1                           ; 004f8501
        ;   Label: LAB_004f8501
    PUSH 0x58da0f                       ; 004f8503 | = "!!!CRC CHECK FAILED!! on these files:"
    LEA EAX,[ESP + 0x8]                 ; 004f8508
    PUSH EAX                            ; 004f850c
    CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70 ; 004f850d
        ;   XREF to: 00474d70 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70()
    ADD ESP,0xc                         ; 004f8512
    XOR EBX,EBX                         ; 004f8515
    PUSH EBX                            ; 004f8517
    LEA EAX,[ESP + 0x4]                 ; 004f8518
    PUSH EAX                            ; 004f851c
    CALL shape_edittool.cpp_CPickList_dtor_FUN_00474cf0 ; 004f851d
        ;   XREF to: 00474cf0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_00474cf0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f8522
    MOV EAX,EBX                         ; 004f8525
    ADD ESP,0x188                       ; 004f8527
    POP EBP                             ; 004f852d
    POP EDI                             ; 004f852e
    POP ESI                             ; 004f852f
    POP EBX                             ; 004f8530
    RET                                 ; 004f8531
    CMP ECX,0x2                         ; 004f8532
        ;   Label: LAB_004f8532
    JNZ 0x004f8547                      ; 004f8535
        ;   XREF to: 004f8547 (CONDITIONAL_JUMP)  ; LAB_004f8547
    MOV dword ptr [ESP + 0x17c],0x8     ; 004f8537
    JMP 0x004f8284                      ; 004f8542
        ;   XREF to: 004f8284 (UNCONDITIONAL_JUMP)  ; LAB_004f8284
    MOV EDI,0x58da35                    ; 004f8547 | = "..\\engine\\pod.cpp"
        ;   Label: LAB_004f8547
    MOV EBP,0x1cf                       ; 004f854c
    PUSH 0x58da47                       ; 004f8551 | = "Invalid pod version!"
    MOV dword ptr [0x01cc4800],EDI      ; 004f8556 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 004f855c | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f8562
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f8567
    JMP 0x004f8284                      ; 004f856a
        ;   XREF to: 004f8284 (UNCONDITIONAL_JUMP)  ; LAB_004f8284


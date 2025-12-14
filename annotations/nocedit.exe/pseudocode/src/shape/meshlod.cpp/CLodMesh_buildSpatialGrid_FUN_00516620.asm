; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
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
;   shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_00516d50 at 00516da9
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_0063753d
;   TerminatedCString s_shape_meshlod_cpp_00637552
;   TerminatedCString s_Out_of_memory_00637567
;   TerminatedCString s_Creating_quick_grid_00637576
;   TerminatedCString s_shape_meshlod_cpp_0063758a
;   TerminatedCString s_shape_meshlod_cpp_0063759f
;   TerminatedCString s_Out_of_memory_creating_g_006375b4
;   TerminatedCString s_shape_meshlod_cpp_006375d4
;   TerminatedCString s_Bug_creating_grid_006375e9
;   double DOUBLE_006375fd = 0.0625
;   double DOUBLE_00637605 = -0.510000000000000
;   double DOUBLE_0063760d = 0.0500000000000000
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;   char* g_CurrentFilename
;   ... and 1 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516620
        ;   Label: shape_meshlod.cpp_CLodMesh_buildSpatialGrid_FUN_00516620
    PUSH ESI                            ; 00516621
    PUSH EDI                            ; 00516622
    PUSH EBP                            ; 00516623
    MOV EBP,ESP                         ; 00516624
    SUB ESP,0x68                        ; 00516626
    AND ESP,0xfffffff8                  ; 00516629
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051662c
    PUSH 0x43f                          ; 0051662f
    PUSH 0x63753d                       ; 00516634 | = "..\\shape\\meshlod.cpp"
    PUSH 0x4004                         ; 00516639
    MOV ECX,dword ptr [EBX + 0x54]      ; 0051663e
    XOR EDX,EDX                         ; 00516641
    PUSH ECX                            ; 00516643
    MOV dword ptr [ESP + 0x64],EDX      ; 00516644
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 00516648
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0051664d
    MOV dword ptr [EBX + 0x54],EAX      ; 00516650
    TEST EAX,EAX                        ; 00516653
    JZ 0x0051690c                       ; 00516655
        ;   XREF to: 0051690c (CONDITIONAL_JUMP)  ; LAB_0051690c
    PUSH 0x637576                       ; 0051665b | = "Creating quick-grid"
        ;   Label: LAB_0051665b
    MOV EDX,dword ptr [0x00678a60]      ; 00516660 | g_CEditorToolsPtr
    PUSH EDX                            ; 00516666 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430 ; 00516667
        ;   XREF to: 004a0430 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0051666c
    XOR ECX,ECX                         ; 0051666f
    MOV dword ptr [ESP],ECX             ; 00516671
    MOV dword ptr [ESP + 0x48],ECX      ; 00516674
    MOV EAX,dword ptr [ESP]             ; 00516678
        ;   Label: LAB_00516678
    MOV dword ptr [ESP + 0x64],EAX      ; 0051667b
    FLD double ptr [0x006375fd]         ; 0051667f | DOUBLE_006375fd
    FILD dword ptr [ESP + 0x64]         ; 00516685
    FMUL ST1                            ; 00516689
    XOR EDI,EDI                         ; 0051668b
    FADD double ptr [0x00637605]        ; 0051668d | DOUBLE_00637605
    MOV dword ptr [ESP + 0x4],EDI       ; 00516693
    FST float ptr [ESP + 0x30]          ; 00516697
    FADDP                               ; 0051669b
    MOV EAX,dword ptr [ESP + 0x48]      ; 0051669d
    FADD double ptr [0x0063760d]        ; 005166a1 | DOUBLE_0063760d
    MOV dword ptr [ESP + 0x4c],EAX      ; 005166a7
    FSTP float ptr [ESP + 0xc]          ; 005166ab
    MOV EAX,dword ptr [ESP + 0x4]       ; 005166af
        ;   Label: LAB_005166af
    MOV dword ptr [ESP + 0x64],EAX      ; 005166b3
    FLD double ptr [0x006375fd]         ; 005166b7 | DOUBLE_006375fd
    FILD dword ptr [ESP + 0x64]         ; 005166bd
    FMUL ST1                            ; 005166c1
    XOR EAX,EAX                         ; 005166c3
    FADD double ptr [0x00637605]        ; 005166c5 | DOUBLE_00637605
    MOV dword ptr [ESP + 0x8],EAX       ; 005166cb
    FST float ptr [ESP + 0x34]          ; 005166cf
    FADDP                               ; 005166d3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 005166d5
    FADD double ptr [0x0063760d]        ; 005166d9 | DOUBLE_0063760d
    MOV dword ptr [ESP + 0x50],EAX      ; 005166df
    FSTP float ptr [ESP + 0x10]         ; 005166e3
    MOV EAX,dword ptr [ESP + 0x8]       ; 005166e7
        ;   Label: LAB_005166e7
    MOV dword ptr [ESP + 0x64],EAX      ; 005166eb
    FLD double ptr [0x006375fd]         ; 005166ef | DOUBLE_006375fd
    FILD dword ptr [ESP + 0x64]         ; 005166f5
    FMUL ST1                            ; 005166f9
    FADD double ptr [0x00637605]        ; 005166fb | DOUBLE_00637605
    FST float ptr [ESP + 0x38]          ; 00516701
    FADDP                               ; 00516705
    FADD double ptr [0x0063760d]        ; 00516707 | DOUBLE_0063760d
    MOV EDX,dword ptr [ESP + 0x50]      ; 0051670d
    FSTP float ptr [ESP + 0x14]         ; 00516711
    MOV EAX,dword ptr [EBX + 0x54]      ; 00516715
    ADD EAX,EDX                         ; 00516718
    MOV EDX,dword ptr [ESP + 0x54]      ; 0051671a
    MOV dword ptr [EAX],EDX             ; 0051671e
    MOV ECX,dword ptr [EBX + 0x8]       ; 00516720
    XOR EDI,EDI                         ; 00516723
    TEST ECX,ECX                        ; 00516725
    JLE 0x00516862                      ; 00516727
        ;   XREF to: 00516862 (CONDITIONAL_JUMP)  ; LAB_00516862
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051672d
    LEA EDX,[EAX + 0x4]                 ; 00516734
    MOV dword ptr [ESP + 0x58],EDI      ; 00516737
    MOV dword ptr [ESP + 0x5c],EDX      ; 0051673b
    MOV dword ptr [ESP + 0x60],EAX      ; 0051673f
    MOV EDX,dword ptr [ESP + 0x58]      ; 00516743
        ;   Label: LAB_00516743
    MOV ESI,dword ptr [EBX + 0xc]       ; 00516747
    ADD ESI,EDX                         ; 0051674a
    IMUL EDX,dword ptr [ESI + 0x10],0x4c4 ; 0051674c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00516753
    ADD EDX,EAX                         ; 00516756
    LEA EAX,[ESP + 0x24]                ; 00516758
    CMP EAX,EDX                         ; 0051675c
    JZ 0x00516774                       ; 0051675e
        ;   XREF to: 00516774 (CONDITIONAL_JUMP)  ; LAB_00516774
    MOV EAX,dword ptr [EDX]             ; 00516760
    MOV dword ptr [ESP + 0x24],EAX      ; 00516762
    MOV EAX,dword ptr [EDX + 0x4]       ; 00516766
    MOV dword ptr [ESP + 0x28],EAX      ; 00516769
    MOV EAX,dword ptr [EDX + 0x8]       ; 0051676d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00516770
    LEA EDX,[ESP + 0x18]                ; 00516774
        ;   Label: LAB_00516774
    LEA EAX,[ESP + 0x24]                ; 00516778
    CMP EDX,EAX                         ; 0051677c
    JNZ 0x00516933                      ; 0051677e
        ;   XREF to: 00516933 (CONDITIONAL_JUMP)  ; LAB_00516933
    LEA EDX,[ESI + 0x4]                 ; 00516784
        ;   Label: LAB_00516784
    ADD ESI,0xc                         ; 00516787
    IMUL EAX,dword ptr [EDX + 0x10],0x4c4 ; 0051678a
        ;   Label: LAB_0051678a
    MOV ECX,dword ptr [EBX + 0x4]       ; 00516791
    ADD ECX,EAX                         ; 00516794
    MOV EAX,dword ptr [ECX]             ; 00516796
    MOV dword ptr [ESP + 0x3c],EAX      ; 00516798
    LEA EAX,[ECX + 0x4]                 ; 0051679c
    MOV EAX,dword ptr [EAX]             ; 0051679f
    MOV dword ptr [ESP + 0x40],EAX      ; 005167a1
    LEA EAX,[ECX + 0x8]                 ; 005167a5
    MOV EAX,dword ptr [EAX]             ; 005167a8
    FLD float ptr [ESP + 0x3c]          ; 005167aa
    MOV dword ptr [ESP + 0x44],EAX      ; 005167ae
    FCOMP float ptr [ESP + 0x18]        ; 005167b2
    FNSTSW AX                           ; 005167b6
    SAHF                                ; 005167b8
    JNC 0x005167c3                      ; 005167b9
        ;   XREF to: 005167c3 (CONDITIONAL_JUMP)  ; LAB_005167c3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005167bb
    MOV dword ptr [ESP + 0x18],EAX      ; 005167bf
    FLD float ptr [ESP + 0x3c]          ; 005167c3
        ;   Label: LAB_005167c3
    FCOMP float ptr [ESP + 0x24]        ; 005167c7
    FNSTSW AX                           ; 005167cb
    SAHF                                ; 005167cd
    JBE 0x005167d8                      ; 005167ce
        ;   XREF to: 005167d8 (CONDITIONAL_JUMP)  ; LAB_005167d8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005167d0
    MOV dword ptr [ESP + 0x24],EAX      ; 005167d4
    FLD float ptr [ESP + 0x40]          ; 005167d8
        ;   Label: LAB_005167d8
    FCOMP float ptr [ESP + 0x1c]        ; 005167dc
    FNSTSW AX                           ; 005167e0
    SAHF                                ; 005167e2
    JNC 0x005167ed                      ; 005167e3
        ;   XREF to: 005167ed (CONDITIONAL_JUMP)  ; LAB_005167ed
    MOV EAX,dword ptr [ESP + 0x40]      ; 005167e5
    MOV dword ptr [ESP + 0x1c],EAX      ; 005167e9
    FLD float ptr [ESP + 0x40]          ; 005167ed
        ;   Label: LAB_005167ed
    FCOMP float ptr [ESP + 0x28]        ; 005167f1
    FNSTSW AX                           ; 005167f5
    SAHF                                ; 005167f7
    JBE 0x00516802                      ; 005167f8
        ;   XREF to: 00516802 (CONDITIONAL_JUMP)  ; LAB_00516802
    MOV EAX,dword ptr [ESP + 0x40]      ; 005167fa
    MOV dword ptr [ESP + 0x28],EAX      ; 005167fe
    FLD float ptr [ESP + 0x44]          ; 00516802
        ;   Label: LAB_00516802
    FCOMP float ptr [ESP + 0x20]        ; 00516806
    FNSTSW AX                           ; 0051680a
    SAHF                                ; 0051680c
    JNC 0x00516817                      ; 0051680d
        ;   XREF to: 00516817 (CONDITIONAL_JUMP)  ; LAB_00516817
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051680f
    MOV dword ptr [ESP + 0x20],EAX      ; 00516813
    FLD float ptr [ESP + 0x44]          ; 00516817
        ;   Label: LAB_00516817
    FCOMP float ptr [ESP + 0x2c]        ; 0051681b
    FNSTSW AX                           ; 0051681f
    SAHF                                ; 00516821
    JBE 0x0051682c                      ; 00516822
        ;   XREF to: 0051682c (CONDITIONAL_JUMP)  ; LAB_0051682c
    MOV EAX,dword ptr [ESP + 0x44]      ; 00516824
    MOV dword ptr [ESP + 0x2c],EAX      ; 00516828
    ADD EDX,0x4                         ; 0051682c
        ;   Label: LAB_0051682c
    CMP EDX,ESI                         ; 0051682f
    JNZ 0x0051678a                      ; 00516831
        ;   XREF to: 0051678a (CONDITIONAL_JUMP)  ; LAB_0051678a
    FLD float ptr [ESP + 0x18]          ; 00516837
    FCOMP float ptr [ESP + 0xc]         ; 0051683b
    FNSTSW AX                           ; 0051683f
    SAHF                                ; 00516841
    JBE 0x00516950                      ; 00516842
        ;   XREF to: 00516950 (CONDITIONAL_JUMP)  ; LAB_00516950
    MOV ESI,dword ptr [ESP + 0x58]      ; 00516848
        ;   Label: LAB_00516848
    INC EDI                             ; 0051684c
    ADD ESI,0x8c                        ; 0051684d
    MOV EAX,dword ptr [EBX + 0x8]       ; 00516853
    MOV dword ptr [ESP + 0x58],ESI      ; 00516856
    CMP EDI,EAX                         ; 0051685a
    JL 0x00516743                       ; 0051685c
        ;   XREF to: 00516743 (CONDITIONAL_JUMP)  ; LAB_00516743
    MOV ECX,dword ptr [ESP + 0x8]       ; 00516862
        ;   Label: LAB_00516862
    MOV EDX,dword ptr [ESP + 0x50]      ; 00516866
    INC ECX                             ; 0051686a
    ADD EDX,0x4                         ; 0051686b
    MOV dword ptr [ESP + 0x8],ECX       ; 0051686e
    MOV dword ptr [ESP + 0x50],EDX      ; 00516872
    CMP ECX,0x10                        ; 00516876
    JL 0x005166e7                       ; 00516879
        ;   XREF to: 005166e7 (CONDITIONAL_JUMP)  ; LAB_005166e7
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051687f
    MOV EDI,dword ptr [ESP + 0x4c]      ; 00516883
    INC EAX                             ; 00516887
    ADD EDI,0x40                        ; 00516888
    MOV dword ptr [ESP + 0x4],EAX       ; 0051688b
    MOV dword ptr [ESP + 0x4c],EDI      ; 0051688f
    CMP EAX,0x10                        ; 00516893
    JL 0x005166af                       ; 00516896
        ;   XREF to: 005166af (CONDITIONAL_JUMP)  ; LAB_005166af
    MOV ESI,dword ptr [ESP]             ; 0051689c
    INC ESI                             ; 0051689f
    MOV dword ptr [ESP + 0x64],ESI      ; 005168a0
    PUSH 0x41800000                     ; 005168a4
    FILD dword ptr [ESP + 0x68]         ; 005168a9
    SUB ESP,0x4                         ; 005168ad
    MOV ECX,dword ptr [0x00678a60]      ; 005168b0 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 005168b6
    PUSH ECX                            ; 005168b9 | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 005168ba
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 005168bf
    MOV EDI,dword ptr [ESP + 0x48]      ; 005168c2
    ADD EDI,0x400                       ; 005168c6
    MOV dword ptr [ESP],ESI             ; 005168cc
    MOV dword ptr [ESP + 0x48],EDI      ; 005168cf
    CMP ESI,0x10                        ; 005168d3
    JL 0x00516678                       ; 005168d6
        ;   XREF to: 00516678 (CONDITIONAL_JUMP)  ; LAB_00516678
    MOV EAX,dword ptr [ESP + 0x54]      ; 005168dc
    CMP EAX,dword ptr [EBX + 0x8]       ; 005168e0
    JL 0x00516a15                       ; 005168e3
        ;   XREF to: 00516a15 (CONDITIONAL_JUMP)  ; LAB_00516a15
    MOV EAX,dword ptr [EBX + 0x54]      ; 005168e9
        ;   Label: LAB_005168e9
    MOV EDX,dword ptr [ESP + 0x54]      ; 005168ec
    MOV dword ptr [EAX + 0x4000],EDX    ; 005168f0
    MOV EDX,dword ptr [0x00678a60]      ; 005168f6 | g_CEditorToolsPtr
    PUSH EDX                            ; 005168fc | g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 005168fd
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00516902
    MOV ESP,EBP                         ; 00516905
    POP EBP                             ; 00516907
    POP EDI                             ; 00516908
    POP ESI                             ; 00516909
    POP EBX                             ; 0051690a
    RET                                 ; 0051690b
    MOV EDI,0x637552                    ; 0051690c | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_0051690c
    MOV EAX,0x440                       ; 00516911
    PUSH 0x637567                       ; 00516916 | = "Out of memory!"
    MOV dword ptr [0x02f0ca48],EDI      ; 0051691b | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00516921 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00516926
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051692b
    JMP 0x0051665b                      ; 0051692e
        ;   XREF to: 0051665b (UNCONDITIONAL_JUMP)  ; LAB_0051665b
    MOV EAX,dword ptr [ESP + 0x24]      ; 00516933
        ;   Label: LAB_00516933
    MOV dword ptr [ESP + 0x18],EAX      ; 00516937
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051693b
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051693f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00516943
    MOV dword ptr [ESP + 0x20],EAX      ; 00516947
    JMP 0x00516784                      ; 0051694b
        ;   XREF to: 00516784 (UNCONDITIONAL_JUMP)  ; LAB_00516784
    FLD float ptr [ESP + 0x24]          ; 00516950
        ;   Label: LAB_00516950
    FCOMP float ptr [ESP + 0x30]        ; 00516954
    FNSTSW AX                           ; 00516958
    SAHF                                ; 0051695a
    JC 0x00516848                       ; 0051695b
        ;   XREF to: 00516848 (CONDITIONAL_JUMP)  ; LAB_00516848
    FLD float ptr [ESP + 0x1c]          ; 00516961
    FCOMP float ptr [ESP + 0x10]        ; 00516965
    FNSTSW AX                           ; 00516969
    SAHF                                ; 0051696b
    JA 0x00516848                       ; 0051696c
        ;   XREF to: 00516848 (CONDITIONAL_JUMP)  ; LAB_00516848
    FLD float ptr [ESP + 0x28]          ; 00516972
    FCOMP float ptr [ESP + 0x34]        ; 00516976
    FNSTSW AX                           ; 0051697a
    SAHF                                ; 0051697c
    JC 0x00516848                       ; 0051697d
        ;   XREF to: 00516848 (CONDITIONAL_JUMP)  ; LAB_00516848
    FLD float ptr [ESP + 0x20]          ; 00516983
    FCOMP float ptr [ESP + 0x14]        ; 00516987
    FNSTSW AX                           ; 0051698b
    SAHF                                ; 0051698d
    JA 0x00516848                       ; 0051698e
        ;   XREF to: 00516848 (CONDITIONAL_JUMP)  ; LAB_00516848
    FLD float ptr [ESP + 0x2c]          ; 00516994
    FCOMP float ptr [ESP + 0x38]        ; 00516998
    FNSTSW AX                           ; 0051699c
    SAHF                                ; 0051699e
    JC 0x00516848                       ; 0051699f
        ;   XREF to: 00516848 (CONDITIONAL_JUMP)  ; LAB_00516848
    PUSH 0x464                          ; 005169a5
    PUSH 0x63758a                       ; 005169aa | = "..\\shape\\meshlod.cpp"
    MOV ESI,dword ptr [ESP + 0x64]      ; 005169af
    PUSH ESI                            ; 005169b3
    MOV EAX,dword ptr [EBX + 0x58]      ; 005169b4
    PUSH EAX                            ; 005169b7
    CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540 ; 005169b8
        ;   XREF to: 0050f540 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugRealloc_FUN_0050f540(void * ptr, int new_size, char * filename, int line_number)
    ADD ESP,0x10                        ; 005169bd
    MOV dword ptr [EBX + 0x58],EAX      ; 005169c0
    TEST EAX,EAX                        ; 005169c3
    JNZ 0x005169ea                      ; 005169c5
        ;   XREF to: 005169ea (CONDITIONAL_JUMP)  ; LAB_005169ea
    MOV ECX,0x63759f                    ; 005169c7 | = "..\\shape\\meshlod.cpp"
    MOV ESI,0x465                       ; 005169cc
    PUSH 0x6375b4                       ; 005169d1 | = "Out of memory creating gridList"
    MOV dword ptr [0x02f0ca48],ECX      ; 005169d6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005169dc | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005169e2
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005169e7
    MOV EDX,dword ptr [ESP + 0x60]      ; 005169ea
        ;   Label: LAB_005169ea
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005169ee
    MOV EAX,dword ptr [EBX + 0x58]      ; 005169f2
    ADD ECX,0x4                         ; 005169f5
    ADD EAX,EDX                         ; 005169f8
    MOV dword ptr [ESP + 0x5c],ECX      ; 005169fa
    MOV dword ptr [EAX],EDI             ; 005169fe
    MOV EAX,dword ptr [ESP + 0x54]      ; 00516a00
    LEA ESI,[EDX + 0x4]                 ; 00516a04
    INC EAX                             ; 00516a07
    MOV dword ptr [ESP + 0x60],ESI      ; 00516a08
    MOV dword ptr [ESP + 0x54],EAX      ; 00516a0c
    JMP 0x00516848                      ; 00516a10
        ;   XREF to: 00516848 (UNCONDITIONAL_JUMP)  ; LAB_00516848
    MOV ECX,0x6375d4                    ; 00516a15 | = "..\\shape\\meshlod.cpp"
        ;   Label: LAB_00516a15
    MOV ESI,0x46d                       ; 00516a1a
    PUSH 0x6375e9                       ; 00516a1f | = "Bug creating grid!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00516a24 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00516a2a | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00516a30
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00516a35
    JMP 0x005168e9                      ; 00516a38
        ;   XREF to: 005168e9 (UNCONDITIONAL_JUMP)  ; LAB_005168e9


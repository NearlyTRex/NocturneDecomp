; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPodFile * __cdecl engine_pod_cpp_CPod_locateFile_FUN_005512f0(CPod *this_ptr,char *base_path,char *filename,int *file_index_out)
;
; Parameters:
; CPod *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   base_path
; char *           Stack[0xc]:4   filename
; int *            Stack[0x10]:4   file_index_out
; Local Variables:
; undefined1       Stack[-0x224]:1  local_224
;
; XREF[6]:
;   core_msnedit.cpp_CDemonMission_saveMissionAndScript_FUN_0053d190 at 0053d1ae
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538981
;   core_msnedit.cpp_convertAllMissionFiles_FUN_00537230 at 00537274
;   core_skeledit.cpp_CDeformableModel_save_FUN_0058f040 at 0058f075
;   core_skeledit.cpp_CSkeleton_save_FUN_0058b2c0 at 0058b2f5
;   core_skeledit.cpp_FUN_00589f40 at 00589f5f
;
; Called Functions:
;   engine_dosio.c_getRelativeFilePath_FUN_004816c0
;   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005512f0
        ;   Label: engine_pod.cpp_CPod_locateFile_FUN_005512f0
    PUSH ESI                            ; 005512f1
    PUSH EDI                            ; 005512f2
    PUSH EBP                            ; 005512f3
    SUB ESP,0x214                       ; 005512f4
    MOV EDI,dword ptr [ESP + 0x228]     ; 005512fa
    MOV EDX,dword ptr [ESP + 0x230]     ; 00551301
    PUSH EDX                            ; 00551308
    MOV ECX,dword ptr [ESP + 0x230]     ; 00551309
    PUSH ECX                            ; 00551310
    LEA EAX,[ESP + 0x8]                 ; 00551311
    PUSH EAX                            ; 00551315
    XOR EBX,EBX                         ; 00551316
    CALL engine_dosio.c_getRelativeFilePath_FUN_004816c0 ; 00551318
        ;   XREF to: 004816c0 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_getRelativeFilePath_FUN_004816c0(char * dest_path, char * directory, char * filename)
    MOV ESI,dword ptr [EDI]             ; 0055131d
    ADD ESP,0xc                         ; 0055131f
    TEST ESI,ESI                        ; 00551322
    JLE 0x00551366                      ; 00551324
        ;   XREF to: 00551366 (CONDITIONAL_JUMP)  ; LAB_00551366
    MOV ESI,EDI                         ; 00551326
    MOV EAX,ESP                         ; 00551328
        ;   Label: LAB_00551328
    PUSH EAX                            ; 0055132a
    MOV EAX,dword ptr [ESI + 0x4]       ; 0055132b
    PUSH EAX                            ; 0055132e
    CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140 ; 0055132f
        ;   XREF to: 00550140 (UNCONDITIONAL_CALL)  ; int engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140(CPodFile * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00551334
    TEST EAX,EAX                        ; 00551337
    JL 0x0055135c                       ; 00551339
        ;   XREF to: 0055135c (CONDITIONAL_JUMP)  ; LAB_0055135c
    MOV EDX,dword ptr [ESP + 0x234]     ; 0055133b
    TEST EDX,EDX                        ; 00551342
    JZ 0x00551348                       ; 00551344
        ;   XREF to: 00551348 (CONDITIONAL_JUMP)  ; LAB_00551348
    MOV dword ptr [EDX],EAX             ; 00551346
    SHL EBX,0x2                         ; 00551348
        ;   Label: LAB_00551348
    LEA EAX,[EDI + EBX*0x1]             ; 0055134b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0055134e
    ADD ESP,0x214                       ; 00551351
    POP EBP                             ; 00551357
    POP EDI                             ; 00551358
    POP ESI                             ; 00551359
    POP EBX                             ; 0055135a
    RET                                 ; 0055135b
    INC EBX                             ; 0055135c
        ;   Label: LAB_0055135c
    MOV EBP,dword ptr [EDI]             ; 0055135d
    ADD ESI,0x4                         ; 0055135f
    CMP EBX,EBP                         ; 00551362
    JL 0x00551328                       ; 00551364
        ;   XREF to: 00551328 (CONDITIONAL_JUMP)  ; LAB_00551328
    XOR EAX,EAX                         ; 00551366
        ;   Label: LAB_00551366
    ADD ESP,0x214                       ; 00551368
    POP EBP                             ; 0055136e
    POP EDI                             ; 0055136f
    POP ESI                             ; 00551370
    POP EBX                             ; 00551371
    RET                                 ; 00551372


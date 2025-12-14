; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
;
; Parameters:
; char *           Stack[0x4]:4   input_path
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   output_path
; Local Variables:
; undefined1       Stack[-0x208]:1  local_208
; undefined1       Stack[-0x108]:1  local_108
;
; XREF[13]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00579692
;   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 at 00584cae
;   engine_fileio.cpp_CCheckOutItem_checkOutFileFromRepository_FUN_004b3920 at 004b3a26
;   engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 at 004b50a0
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b42b3
;   engine_fileio.cpp_CCheckOutItem_removeCheckOutBookkeeping_FUN_004b35a0 at 004b362e
;   engine_fileio.cpp_CCheckOutList_load_FUN_004b2890 at 004b28d5
;   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 at 004bb0c0
;   engine_fileio.cpp_CFileManager_checkOutAndExtractPod_FUN_004ba740 at 004ba969
;   engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60 at 004b1e88
;   ... and 3 more
;
; Referenced Globals:
;   TerminatedCString s_anon_00621654
;   undefined4 DAT_00621655
;   TerminatedCString s_core_dpart_cpp_00621656
;   undefined4 s_.\\core\\dpart.cpp_00621657
;
; Called Functions:
;   engine_dosio.c_makePath_FUN_00481f50
;   engine_dosio.c_splitPath_FUN_00481f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481f80
        ;   Label: engine_dosio.c_ensureTrailingSlash_FUN_00481f80
    PUSH EDI                            ; 00481f81
    SUB ESP,0x300                       ; 00481f82
    MOV EBX,dword ptr [ESP + 0x314]     ; 00481f88
    MOV ECX,ESP                         ; 00481f8f
    PUSH ECX                            ; 00481f91
    LEA ECX,[ESP + 0x204]               ; 00481f92
    PUSH ECX                            ; 00481f99
    LEA ECX,[ESP + 0x108]               ; 00481f9a
    PUSH ECX                            ; 00481fa1
    MOV EDX,dword ptr [ESP + 0x31c]     ; 00481fa2
    PUSH EDX                            ; 00481fa9
    MOV ECX,dword ptr [ESP + 0x31c]     ; 00481faa
    PUSH ECX                            ; 00481fb1
    CALL engine_dosio.c_splitPath_FUN_00481f20 ; 00481fb2
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_splitPath_FUN_00481f20(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00481fb7
    MOV ECX,ESP                         ; 00481fba
    PUSH ECX                            ; 00481fbc
    LEA ECX,[ESP + 0x204]               ; 00481fbd
    PUSH ECX                            ; 00481fc4
    LEA ECX,[ESP + 0x108]               ; 00481fc5
    PUSH ECX                            ; 00481fcc
    PUSH 0x0                            ; 00481fcd
    PUSH EBX                            ; 00481fcf
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 00481fd0
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 00481fd5
    TEST EBX,EBX                        ; 00481fd8
    JZ 0x00481fe1                       ; 00481fda
        ;   XREF to: 00481fe1 (CONDITIONAL_JUMP)  ; LAB_00481fe1
    CMP byte ptr [EBX],0x0              ; 00481fdc
    JNZ 0x00481fea                      ; 00481fdf
        ;   XREF to: 00481fea (CONDITIONAL_JUMP)  ; LAB_00481fea
    ADD ESP,0x300                       ; 00481fe1
        ;   Label: LAB_00481fe1
    POP EDI                             ; 00481fe7
    POP EBX                             ; 00481fe8
    RET                                 ; 00481fe9
    MOV EDI,EBX                         ; 00481fea
        ;   Label: LAB_00481fea
    SUB ECX,ECX                         ; 00481fec
    DEC ECX                             ; 00481fee
    XOR EAX,EAX                         ; 00481fef
    SCASB.REPNE ES:EDI                  ; 00481ff1
    NOT ECX                             ; 00481ff3
    DEC ECX                             ; 00481ff5
    CMP byte ptr [ECX + EBX*0x1 + -0x1],0x5c ; 00481ff6
    JZ 0x00481fe1                       ; 00481ffb
        ;   XREF to: 00481fe1 (CONDITIONAL_JUMP)  ; LAB_00481fe1
    PUSH ESI                            ; 00481ffd
    MOV ESI,0x621654                    ; 00481ffe | = "\\"
    MOV EDI,EBX                         ; 00482003
    PUSH EDI                            ; 00482005
    SUB ECX,ECX                         ; 00482006
    DEC ECX                             ; 00482008
    MOV AL,0x0                          ; 00482009
    SCASB.REPNE ES:EDI                  ; 0048200b
    DEC EDI                             ; 0048200d
    MOV AL,byte ptr [ESI]               ; 0048200e | = "\\" | s_core_dpart_cpp_00621656
        ;   Label: LAB_0048200e
    MOV byte ptr [EDI],AL               ; 00482010
    CMP AL,0x0                          ; 00482012
    JZ 0x00482026                       ; 00482014
        ;   XREF to: 00482026 (CONDITIONAL_JUMP)  ; LAB_00482026
    MOV AL,byte ptr [ESI + 0x1]         ; 00482016 | DAT_00621655 | s_.\core\dpart.cpp_00621657
    ADD ESI,0x2                         ; 00482019
    MOV byte ptr [EDI + 0x1],AL         ; 0048201c
    ADD EDI,0x2                         ; 0048201f
    CMP AL,0x0                          ; 00482022
    JNZ 0x0048200e                      ; 00482024
        ;   XREF to: 0048200e (CONDITIONAL_JUMP)  ; LAB_0048200e
    POP EDI                             ; 00482026
        ;   Label: LAB_00482026
    POP ESI                             ; 00482027
    ADD ESP,0x300                       ; 00482028
    POP EDI                             ; 0048202e
    POP EBX                             ; 0048202f
    RET                                 ; 00482030


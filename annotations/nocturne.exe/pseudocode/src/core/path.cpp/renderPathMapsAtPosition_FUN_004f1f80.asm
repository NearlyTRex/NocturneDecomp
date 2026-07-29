; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_004f1f80(CVector3f *position,int depth,int red,int green,int fog)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   position
; int              Stack[0x8]:4   depth
; int              Stack[0xc]:4   red
; int              Stack[0x10]:4   green
; int              Stack[0x14]:4   fog
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0058ce9f
;   TerminatedCString s_Global_pathmap_list_corr_0058ceb0
;   char* PTR_01cc4800
;   int INT_01cc4804
;   undefined4 DAT_01e312f8
;   undefined4 DAT_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
;   core_main.c_FUN_004c8440
;   core_path.cpp_CPathMap_renderPathMap_FUN_004f18c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1f80
        ;   Label: core_path.cpp_renderPathMapsAtPosition_FUN_004f1f80
    PUSH ESI                            ; 004f1f81
    PUSH EDI                            ; 004f1f82
    PUSH EBP                            ; 004f1f83
    SUB ESP,0x18                        ; 004f1f84
    MOV EBP,dword ptr [ESP + 0x34]      ; 004f1f87
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004f1f8b
    PUSH EDX                            ; 004f1f8f
    PUSH 0x1fba938                      ; 004f1f90 | DAT_01fba938
    LEA ESI,[ESP + 0x14]                ; 004f1f95
    LEA EDI,[ESP + 0x8]                 ; 004f1f99
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700 ; 004f1f9d
        ;   XREF to: 0046b700 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700()
    LEA ESI,[ESP + 0x14]                ; 004f1fa2
    ADD ESP,0x8                         ; 004f1fa6
    MOVSD ES:EDI,ESI                    ; 004f1fa9
    MOVSD ES:EDI,ESI                    ; 004f1faa
    MOVSD ES:EDI,ESI                    ; 004f1fab
    MOV ECX,dword ptr [0x01e312f8]      ; 004f1fac | DAT_01e312f8
    XOR ESI,ESI                         ; 004f1fb2
    TEST ECX,ECX                        ; 004f1fb4
    JLE 0x004f1fe3                      ; 004f1fb6
        ;   XREF to: 004f1fe3 (CONDITIONAL_JUMP)  ; LAB_004f1fe3
    XOR EBX,EBX                         ; 004f1fb8
    CMP dword ptr [EBX + 0x1e312fc],0x0 ; 004f1fba
        ;   Label: LAB_004f1fba
    JZ 0x004f1feb                       ; 004f1fc1
        ;   XREF to: 004f1feb (CONDITIONAL_JUMP)  ; LAB_004f1feb
    MOV EDX,dword ptr [EBX + 0x1e312fc] ; 004f1fc3
        ;   Label: LAB_004f1fc3
    CMP dword ptr [EDX + 0x138c0],0x461c3c00 ; 004f1fc9
    JLE 0x004f2010                      ; 004f1fd3
        ;   XREF to: 004f2010 (CONDITIONAL_JUMP)  ; LAB_004f2010
    MOV EDI,dword ptr [0x01e312f8]      ; 004f1fd5 | DAT_01e312f8
        ;   Label: LAB_004f1fd5
    INC ESI                             ; 004f1fdb
    ADD EBX,0x4                         ; 004f1fdc
    CMP ESI,EDI                         ; 004f1fdf
    JL 0x004f1fba                       ; 004f1fe1
        ;   XREF to: 004f1fba (CONDITIONAL_JUMP)  ; LAB_004f1fba
    ADD ESP,0x18                        ; 004f1fe3
        ;   Label: LAB_004f1fe3
    POP EBP                             ; 004f1fe6
    POP EDI                             ; 004f1fe7
    POP ESI                             ; 004f1fe8
    POP EBX                             ; 004f1fe9
    RET                                 ; 004f1fea
    MOV EDX,0x58ce9f                    ; 004f1feb | = "..\\core\\path.cpp"
        ;   Label: LAB_004f1feb
    MOV ECX,0x6b5                       ; 004f1ff0
    PUSH 0x58ceb0                       ; 004f1ff5 | = "Global pathmap list corruption"
    MOV dword ptr [0x01cc4800],EDX      ; 004f1ffa | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004f2000 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004f2006
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004f200b
    JMP 0x004f1fc3                      ; 004f200e
        ;   XREF to: 004f1fc3 (UNCONDITIONAL_JUMP)  ; LAB_004f1fc3
    MOV ECX,dword ptr [ESP]             ; 004f2010
        ;   Label: LAB_004f2010
    CMP ECX,dword ptr [EDX + 0xc]       ; 004f2013
    JNZ 0x004f1fd5                      ; 004f2016
        ;   XREF to: 004f1fd5 (CONDITIONAL_JUMP)  ; LAB_004f1fd5
    MOV EDI,dword ptr [ESP + 0x4]       ; 004f2018
    CMP EDI,dword ptr [EDX + 0x10]      ; 004f201c
    JNZ 0x004f1fd5                      ; 004f201f
        ;   XREF to: 004f1fd5 (CONDITIONAL_JUMP)  ; LAB_004f1fd5
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f2021
    CMP ECX,dword ptr [EDX + 0x14]      ; 004f2025
    JNZ 0x004f1fd5                      ; 004f2028
        ;   XREF to: 004f1fd5 (CONDITIONAL_JUMP)  ; LAB_004f1fd5
    MOV EDI,dword ptr [ESP + 0x3c]      ; 004f202a
    PUSH EDI                            ; 004f202e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f202f
    PUSH EAX                            ; 004f2033
    PUSH EBP                            ; 004f2034
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004f2035
    PUSH ECX                            ; 004f2039
    PUSH EDX                            ; 004f203a
    CALL core_path.cpp_CPathMap_renderPathMap_FUN_004f18c0 ; 004f203b
        ;   XREF to: 004f18c0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_renderPathMap_FUN_004f18c0(CPathMap * this_ptr, int depth, int red, int green, ...)
    ADD ESP,0x14                        ; 004f2040
    JMP 0x004f1fd5                      ; 004f2043
        ;   XREF to: 004f1fd5 (UNCONDITIONAL_JUMP)  ; LAB_004f1fd5


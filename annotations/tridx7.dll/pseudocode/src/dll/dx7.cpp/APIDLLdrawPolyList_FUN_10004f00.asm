; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLdrawPolyList_FUN_10004f00(SRenderVertex *vertex_buffer,SMRGLPrimitiveTriangle **polygons,int polygon_count,int render_flags)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_buffer
; SMRGLPrimitiveTriangle * * Stack[0x8]:4   polygons
; int              Stack[0xc]:4   polygon_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Referenced Globals:
;   int g_InScene = 0x0
;   undefined4 DAT_1001422c
;   undefined4 DAT_10014234
;   TerminatedCString s_You_re_shoving_too_many_10016bb8
;   undefined4 DAT_10238910
;   undefined4 DAT_10238912
;   undefined4 DAT_10238914
;
; Called Functions:
;   dll_dx7.cpp_fatalError_FUN_10002340
;   dll_dx7.cpp_FUN_10003f10
;   dll_dx7.cpp_FUN_100047b0
;   dll_dx7.cpp_FUN_10005010
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 10004f00
        ;   Label: dll_dx7.cpp_APIDLLdrawPolyList_FUN_10004f00
    CMP dword ptr [0x10014204],0x0      ; 10004f03 | g_InScene
    PUSH EBX                            ; 10004f0a
    PUSH ESI                            ; 10004f0b
    PUSH EDI                            ; 10004f0c
    PUSH EBP                            ; 10004f0d
    JNZ 0x10004f1a                      ; 10004f0e
        ;   XREF to: 10004f1a (CONDITIONAL_JUMP)  ; LAB_10004f1a
    XOR EAX,EAX                         ; 10004f10
    POP EBP                             ; 10004f12
    POP EDI                             ; 10004f13
    POP ESI                             ; 10004f14
    POP EBX                             ; 10004f15
    ADD ESP,0xc                         ; 10004f16
    RET                                 ; 10004f19
    MOV ESI,dword ptr [ESP + 0x2c]      ; 10004f1a
        ;   Label: LAB_10004f1a
    PUSH ESI                            ; 10004f1e
    CALL dll_dx7.cpp_FUN_10003f10       ; 10004f1f
        ;   XREF to: 10003f10 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10003f10()
    MOV ECX,dword ptr [ESP + 0x2c]      ; 10004f24
    ADD ESP,0x4                         ; 10004f28
    INC dword ptr [0x10014234]          ; 10004f2b | DAT_10014234
    TEST ECX,ECX                        ; 10004f31
    JLE 0x10004ff7                      ; 10004f33
        ;   XREF to: 10004ff7 (CONDITIONAL_JUMP)  ; LAB_10004ff7
    MOV EAX,dword ptr [ESP + 0x24]      ; 10004f39
    MOV EDI,dword ptr [ESP + 0x20]      ; 10004f3d
    MOV dword ptr [ESP + 0x14],EAX      ; 10004f41
    MOV dword ptr [ESP + 0x18],ECX      ; 10004f45
    MOV EAX,dword ptr [ESP + 0x14]      ; 10004f49
        ;   Label: LAB_10004f49
    MOV dword ptr [ESP + 0x10],0x0      ; 10004f4d
    MOV EBX,dword ptr [EAX]             ; 10004f55
    MOV EAX,dword ptr [EBX + 0x4]       ; 10004f57
    SUB EAX,0x2                         ; 10004f5a
    TEST EAX,EAX                        ; 10004f5d
    JLE 0x10004fcf                      ; 10004f5f
        ;   XREF to: 10004fcf (CONDITIONAL_JUMP)  ; LAB_10004fcf
    LEA EBP,[EBX + 0x24]                ; 10004f61
    PUSH ESI                            ; 10004f64
        ;   Label: LAB_10004f64
    LEA EAX,[EBX + 0x18]                ; 10004f65
    PUSH EDI                            ; 10004f68
    PUSH EAX                            ; 10004f69
    CALL dll_dx7.cpp_FUN_10005010       ; 10004f6a
        ;   XREF to: 10005010 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10005010()
    ADD ESP,0xc                         ; 10004f6f
    MOV ECX,dword ptr [0x1001422c]      ; 10004f72 | DAT_1001422c
    MOV word ptr [ECX*0x2 + 0x10238910],AX ; 10004f78 | DAT_10238910
    PUSH ESI                            ; 10004f80
    PUSH EDI                            ; 10004f81
    PUSH EBP                            ; 10004f82
    ADD EBP,0xc                         ; 10004f83
    CALL dll_dx7.cpp_FUN_10005010       ; 10004f86
        ;   XREF to: 10005010 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10005010()
    ADD ESP,0xc                         ; 10004f8b
    MOV ECX,dword ptr [0x1001422c]      ; 10004f8e | DAT_1001422c
    MOV word ptr [ECX*0x2 + 0x10238912],AX ; 10004f94 | DAT_10238912
    PUSH ESI                            ; 10004f9c
    PUSH EDI                            ; 10004f9d
    LEA EAX,[EBP]                       ; 10004f9e
    PUSH EAX                            ; 10004fa1
    CALL dll_dx7.cpp_FUN_10005010       ; 10004fa2
        ;   XREF to: 10005010 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10005010()
    INC dword ptr [ESP + 0x1c]          ; 10004fa7
    ADD ESP,0xc                         ; 10004fab
    MOV ECX,dword ptr [0x1001422c]      ; 10004fae | DAT_1001422c
    ADD dword ptr [0x1001422c],0x3      ; 10004fb4 | DAT_1001422c
    MOV word ptr [ECX*0x2 + 0x10238914],AX ; 10004fbb | DAT_10238914
    MOV EAX,dword ptr [EBX + 0x4]       ; 10004fc3
    SUB EAX,0x2                         ; 10004fc6
    CMP EAX,dword ptr [ESP + 0x10]      ; 10004fc9
    JG 0x10004f64                       ; 10004fcd
        ;   XREF to: 10004f64 (CONDITIONAL_JUMP)  ; LAB_10004f64
    CMP dword ptr [0x1001422c],0x3e76   ; 10004fcf | DAT_1001422c
        ;   Label: LAB_10004fcf
    JLE 0x10004fe8                      ; 10004fd9
        ;   XREF to: 10004fe8 (CONDITIONAL_JUMP)  ; LAB_10004fe8
    PUSH 0x10016bb8                     ; 10004fdb | = "You're shoving too many faces"
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10004fe0
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    ADD ESP,0x4                         ; 10004fe5
    ADD dword ptr [ESP + 0x14],0x4      ; 10004fe8
        ;   Label: LAB_10004fe8
    DEC dword ptr [ESP + 0x18]          ; 10004fed
    JNZ 0x10004f49                      ; 10004ff1
        ;   XREF to: 10004f49 (CONDITIONAL_JUMP)  ; LAB_10004f49
    CALL dll_dx7.cpp_FUN_100047b0       ; 10004ff7
        ;   XREF to: 100047b0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100047b0()
        ;   Label: LAB_10004ff7
    MOV EAX,0x1                         ; 10004ffc
    POP EBP                             ; 10005001
    POP EDI                             ; 10005002
    POP ESI                             ; 10005003
    POP EBX                             ; 10005004
    ADD ESP,0xc                         ; 10005005
    RET                                 ; 10005008


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl dll_dx7_cpp_checkD3DResult_FUN_10001d70(HRESULT result)
;
; Parameters:
; HRESULT          Stack[0x4]:4   result
;
; XREF[3]:
;   dll_dx7.cpp_APIDLLinit_FUN_10001a80 at 10001c6f
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 at 100026e0
;   dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80 at 10003bf2
;
; Referenced Globals:
;   void* switchdataD_100021d4 = 10001e02
;   byte switchdataD_100022b0 = 0x0
;   void* switchdataD_100022fc = 1000203e
;   TerminatedCString s_D3DERR_BADMAJORVERSION_T_10014250
;   TerminatedCString s_D3DERR_BADMINORVERSION_T_100142f8
;   TerminatedCString s_D3DERR_COLORKEYATTACHED_10014400
;   TerminatedCString s_D3DERR_CONFLICTINGTEXTUR_10014480
;   TerminatedCString s_D3DERR_CONFLICTINGTEXTUR_100144d8
;   TerminatedCString s_D3DERR_CONFLICTINGRENDER_100145bc
;   TerminatedCString s_D3DERR_DEVICEAGGREGATED_10014614
;   TerminatedCString s_D3DERR_EXECUTE_CLIPPED_F_100146a4
;   TerminatedCString s_D3DERR_EXECUTE_CREATE_FA_10014700
;   TerminatedCString s_D3DERR_EXECUTE_DESTROY_F_1001479c
;   TerminatedCString s_D3DERR_EXECUTE_FAILED_Th_100147f8
;   TerminatedCString s_D3DERR_EXECUTE_LOCK_FAIL_10014858
;   ... and 63 more
;
; Called Functions:
;   dll_dx7.cpp_fatalError_FUN_10002340
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10001d70
        ;   Label: dll_dx7.cpp_checkD3DResult_FUN_10001d70
    CMP EAX,0x88760800                  ; 10001d74
    JG 0x10001d9e                       ; 10001d79
        ;   XREF to: 10001d9e (CONDITIONAL_JUMP)  ; LAB_10001d9e
    JZ 0x10001f2d                       ; 10001d7b
        ;   XREF to: 10001f2d (CONDITIONAL_JUMP)  ; LAB_10001f2d
    ADD EAX,0x7789fd44                  ; 10001d81
    CMP EAX,0x4b                        ; 10001d86
    JA 0x100021c4                       ; 10001d89
        ;   XREF to: 100021c4 (CONDITIONAL_JUMP)  ; caseD_88760825
    XOR ECX,ECX                         ; 10001d8f
    MOV CL,byte ptr [EAX + 0x100022b0]  ; 10001d91 | switchdataD_100022b0
    JMP dword ptr [ECX*0x4 + 0x100021d4] ; 10001d97 | caseD_887602bc | caseD_887602bd | caseD_88760825
        ;   Label: switchD
    CMP EAX,0x8876080c                  ; 10001d9e
        ;   Label: LAB_10001d9e
    JG 0x10001db7                       ; 10001da3
        ;   XREF to: 10001db7 (CONDITIONAL_JUMP)  ; LAB_10001db7
    JZ 0x10002169                       ; 10001da5
        ;   XREF to: 10002169 (CONDITIONAL_JUMP)  ; LAB_10002169
    CMP EAX,0x88760802                  ; 10001dab
    JZ 0x10001e1c                       ; 10001db0
        ;   XREF to: 10001e1c (CONDITIONAL_JUMP)  ; LAB_10001e1c
    JMP 0x100021c4                      ; 10001db2
        ;   XREF to: 100021c4 (UNCONDITIONAL_JUMP)  ; caseD_88760825
    CMP EAX,0x88760816                  ; 10001db7
        ;   Label: LAB_10001db7
    JG 0x10001ddf                       ; 10001dbc
        ;   XREF to: 10001ddf (CONDITIONAL_JUMP)  ; LAB_10001ddf
    JZ 0x100021b7                       ; 10001dbe
        ;   XREF to: 100021b7 (CONDITIONAL_JUMP)  ; LAB_100021b7
    CMP EAX,0x8876080d                  ; 10001dc4
    JZ 0x1000214f                       ; 10001dc9
        ;   XREF to: 1000214f (CONDITIONAL_JUMP)  ; LAB_1000214f
    CMP EAX,0x8876080e                  ; 10001dcf
    JZ 0x1000215c                       ; 10001dd4
        ;   XREF to: 1000215c (CONDITIONAL_JUMP)  ; LAB_1000215c
    JMP 0x100021c4                      ; 10001dda
        ;   XREF to: 100021c4 (UNCONDITIONAL_JUMP)  ; caseD_88760825
    TEST EAX,EAX                        ; 10001ddf
        ;   Label: LAB_10001ddf
    JG 0x100021c4                       ; 10001de1
        ;   XREF to: 100021c4 (CONDITIONAL_JUMP)  ; caseD_88760825
    JZ 0x100021d1                       ; 10001de7
        ;   XREF to: 100021d1 (CONDITIONAL_JUMP)  ; LAB_100021d1
    ADD EAX,0x7789f7e9                  ; 10001ded
    CMP EAX,0xf                         ; 10001df2
    JA 0x100021c4                       ; 10001df5
        ;   XREF to: 100021c4 (CONDITIONAL_JUMP)  ; caseD_88760825
    JMP dword ptr [EAX*0x4 + 0x100022fc] ; 10001dfb | caseD_88760817 | caseD_88760818 | caseD_88760819
        ;   Label: switchD
    PUSH 0x10014250                     ; 10001e02 | = "D3DERR_BADMAJORVERSION: The service y..."
        ;   Label: caseD_887602bc
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e07
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100142f8                     ; 10001e0f | = "D3DERR_BADMINORVERSION: The service y..."
        ;   Label: caseD_887602bd
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e14
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014400                     ; 10001e1c | = "D3DERR_COLORKEYATTACHED: The applicat..."
        ;   Label: LAB_10001e1c
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e21
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014480                     ; 10001e29 | = "D3DERR_CONFLICTINGTEXTUREFILTER: The ..."
        ;   Label: caseD_8876081e
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e2e
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100144d8                     ; 10001e36 | = "D3DERR_CONFLICTINGTEXTUREPALETTE: The..."
        ;   Label: caseD_88760826
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e3b
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100145bc                     ; 10001e43 | = "D3DERR_CONFLICTINGRENDERSTATE: The cu..."
        ;   Label: caseD_88760821
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e48
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014614                     ; 10001e50 | = "D3DERR_DEVICEAGGREGATED: The IDirect3..."
        ;   Label: caseD_887602c3
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e55
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100146a4                     ; 10001e5d | = "D3DERR_EXECUTE_CLIPPED_FAILED: The ex..."
        ;   Label: caseD_887602cd
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e62
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014700                     ; 10001e6a | = "D3DERR_EXECUTE_CREATE_FAILED: The exe..."
        ;   Label: caseD_887602c6
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e6f
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x1001479c                     ; 10001e77 | = "D3DERR_EXECUTE_DESTROY_FAILED: The me..."
        ;   Label: caseD_887602c7
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e7c
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100147f8                     ; 10001e84 | = "D3DERR_EXECUTE_FAILED: The contents o..."
        ;   Label: caseD_887602cc
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e89
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014858                     ; 10001e91 | = "D3DERR_EXECUTE_LOCK_FAILED: The execu..."
        ;   Label: caseD_887602c8
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001e96
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x1001489c                     ; 10001e9e | = "D3DERR_EXECUTE_LOCKED: The operation ..."
        ;   Label: caseD_887602ca
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001ea3
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x1001491c                     ; 10001eab | = "D3DERR_EXECUTE_NOT_LOCKED: The execut..."
        ;   Label: caseD_887602cb
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001eb0
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014984                     ; 10001eb8 | = "D3DERR_EXECUTE_UNLOCK_FAILED: The exe..."
        ;   Label: caseD_887602c9
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001ebd
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100149cc                     ; 10001ec5 | = "D3DERR_INITFAILED: A rendering device..."
        ;   Label: caseD_887602c2
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001eca
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014a38                     ; 10001ed2 | = "D3DERR_INBEGIN: The requested operati..."
        ;   Label: caseD_88760302
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001ed7
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014b10                     ; 10001edf | = "D3DERR_INVALID_DEVICE: The requested ..."
        ;   Label: caseD_887602c1
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001ee4
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014b50                     ; 10001eec | = "D3DERR_INVALIDCURRENTVIEWPORT: The cu..."
        ;   Label: caseD_887602df
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001ef1
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014ba0                     ; 10001ef9 | = "D3DERR_INVALIDMATRIX: The requested o..."
        ;   Label: caseD_88760824
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001efe
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014c74                     ; 10001f06 | = "D3DERR_INVALIDPALETTE: The palette as..."
        ;   Label: caseD_887602e8
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f0b
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014cc0                     ; 10001f13 | = "D3DERR_INVALIDPRIMITIVETYPE: The prim..."
        ;   Label: caseD_887602e0
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f18
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014d1c                     ; 10001f20 | = "D3DERR_INVALIDRAMPTEXTURE: Ramp mode ..."
        ;   Label: caseD_887602e3
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f25
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014dc8                     ; 10001f2d | = "D3DERR_INVALIDVERTEXFORMAT: The combi..."
        ;   Label: LAB_10001f2d
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f32
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014e40                     ; 10001f3a | = "D3DERR_INVALIDVERTEXTYPE: The vertex ..."
        ;   Label: caseD_887602e1
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f3f
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014e94                     ; 10001f47 | = "D3DERR_LIGHT_SET_FAILED: The attempt ..."
        ;   Label: caseD_887602ee
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f4c
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014ef0                     ; 10001f54 | = "D3DERR_LIGHTHASVIEWPORT: The requeste..."
        ;   Label: caseD_887602ef
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f59
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014f68                     ; 10001f61 | = "D3DERR_LIGHTNOTINTHISVIEWPORT: The re..."
        ;   Label: caseD_887602f0
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f66
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10014fec                     ; 10001f6e | = "D3DERR_MATERIAL_CREATE_FAILED: The ma..."
        ;   Label: caseD_887602e4
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f73
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015080                     ; 10001f7b | = "D3DERR_MATERIAL_DESTROY_FAILED: The m..."
        ;   Label: caseD_887602e5
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f80
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100150d8                     ; 10001f88 | = "D3DERR_MATERIAL_GETDATA_FAILED: The m..."
        ;   Label: caseD_887602e7
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f8d
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015128                     ; 10001f95 | = "D3DERR_MATERIAL_SETDATA_FAILED: The m..."
        ;   Label: caseD_887602e6
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001f9a
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015174                     ; 10001fa2 | = "D3DERR_MATRIX_CREATE_FAILED: The matr..."
        ;   Label: caseD_887602da
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001fa7
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100151fc                     ; 10001faf | = "D3DERR_MATRIX_DESTROY_FAILED: The mem..."
        ;   Label: caseD_887602db
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001fb4
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015250                     ; 10001fbc | = "D3DERR_MATRIX_GETDATA_FAILED: The mat..."
        ;   Label: caseD_887602dd
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001fc1
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100152dc                     ; 10001fc9 | = "D3DERR_MATRIX_SETDATA_FAILED: The mat..."
        ;   Label: caseD_887602dc
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001fce
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015364                     ; 10001fd6 | = "D3DERR_NOCURRENTVIEWPORT: The viewpor..."
        ;   Label: caseD_88760307
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001fdb
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100153cc                     ; 10001fe3 | = "D3DERR_NOTINBEGIN: The requested rend..."
        ;   Label: caseD_88760303
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001fe8
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015484                     ; 10001ff0 | = "D3DERR_NOVIEWPORTS: The requested ope..."
        ;   Label: caseD_88760304
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10001ff5
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100154fc                     ; 10001ffd | = "D3DERR_SCENE_BEGIN_FAILED: Scene rend..."
        ;   Label: caseD_887602fa
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002002
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015538                     ; 1000200a | = "D3DERR_SCENE_END_FAILED: Scene render..."
        ;   Label: caseD_887602fb
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 1000200f
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x1001557c                     ; 10002017 | = "D3DERR_SCENE_IN_SCENE: Scene renderin..."
        ;   Label: caseD_887602f8
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 1000201c
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015614                     ; 10002024 | = "D3DERR_SCENE_NOT_IN_SCENE: Scene rend..."
        ;   Label: caseD_887602f9
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002029
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100156b8                     ; 10002031 | = "D3DERR_SETVIEWPORTDATA_FAILED: The vi..."
        ;   Label: caseD_887602de
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002036
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015704                     ; 1000203e | = "D3DERR_STENCILBUFFER_NOTPRESENT: The ..."
        ;   Label: caseD_88760817
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002043
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100157b0                     ; 1000204b | = "D3DERR_SURFACENOTINVIDMEM: The device..."
        ;   Label: caseD_887602eb
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002050
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x1001587c                     ; 10002058 | = "D3DERR_TEXTURE_BADSIZE: The dimension..."
        ;   Label: caseD_887602e2
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 1000205d
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x1001594c                     ; 10002065 | = "D3DERR_TEXTURE_CREATE_FAILED: The tex..."
        ;   Label: caseD_887602d1
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 1000206a
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100159b8                     ; 10002072 | = "D3DERR_TEXTURE_DESTROY_FAILED: The de..."
        ;   Label: caseD_887602d2
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002077
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015a10                     ; 1000207f | = "D3DERR_TEXTURE_GETSURF_FAILED: The Di..."
        ;   Label: caseD_887602d9
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002084
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015a7c                     ; 1000208c | = "D3DERR_TEXTURE_LOAD_FAILED: The textu..."
        ;   Label: caseD_887602d5
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002091
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015abc                     ; 10002099 | = "D3DERR_TEXTURE_LOCK_FAILED: The textu..."
        ;   Label: caseD_887602d3
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 1000209e
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015afc                     ; 100020a6 | = "D3DERR_TEXTURE_LOCKED: The requested ..."
        ;   Label: caseD_887602d7
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100020ab
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015b74                     ; 100020b3 | = "D3DERR_TEXTURE_NO_SUPPORT: The device..."
        ;   Label: caseD_887602d0
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100020b8
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015bbc                     ; 100020c0 | = "D3DERR_TEXTURE_NOT_LOCKED: The reques..."
        ;   Label: caseD_887602d8
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100020c5
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015c34                     ; 100020cd | = "D3DERR_TEXTURE_SWAP_FAILED: The textu..."
        ;   Label: caseD_887602d6
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100020d2
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015c7c                     ; 100020da | = "D3DERR_TEXTURE_UNLOCK_FAILED: The tex..."
        ;   Label: caseD_887602d4
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100020df
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015cc8                     ; 100020e7 | = "D3DERR_TOOMANYOPERATIONS: The applica..."
        ;   Label: caseD_8876081d
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100020ec
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015d3c                     ; 100020f4 | = "D3DERR_TOOMANYPRIMITIVES: The device ..."
        ;   Label: caseD_88760823
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100020f9
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015dac                     ; 10002101 | = "D3DERR_UNSUPPORTEDALPHAARG: The devic..."
        ;   Label: caseD_8876081c
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002106
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015e2c                     ; 1000210e | = "D3DERR_UNSUPPORTEDALPHAOPERATION: The..."
        ;   Label: caseD_8876081b
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002113
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015eb4                     ; 1000211b | = "D3DERR_UNSUPPORTEDCOLORARG: The devic..."
        ;   Label: caseD_8876081a
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002120
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015f34                     ; 10002128 | = "D3DERR_UNSUPPORTEDCOLOROPERATION: The..."
        ;   Label: caseD_88760819
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 1000212d
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10015fbc                     ; 10002135 | = "D3DERR_UNSUPPORTEDFACTORVALUE: The sp..."
        ;   Label: caseD_8876081f
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 1000213a
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016020                     ; 10002142 | = "D3DERR_UNSUPPORTEDTEXTUREFILTER: The ..."
        ;   Label: caseD_88760822
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002147
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016080                     ; 1000214f | = "D3DERR_VBUF_CREATE_FAILED: The vertex..."
        ;   Label: LAB_1000214f
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002154
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016114                     ; 1000215c | = "D3DERR_VERTEXBUFFERLOCKED: The reques..."
        ;   Label: LAB_1000215c
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002161
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016184                     ; 10002169 | = "D3DERR_VERTEXBUFFEROPTIMIZED: The req..."
        ;   Label: LAB_10002169
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 1000216e
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016254                     ; 10002176 | = "D3DERR_VIEWPORTDATANOTSET: The reques..."
        ;   Label: caseD_88760305
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 1000217b
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016330                     ; 10002183 | = "D3DERR_VIEWPORTHASNODEVICE: The reque..."
        ;   Label: caseD_88760306
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002188
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016424                     ; 10002190 | = "D3DERR_WRONGTEXTUREFORMAT: The pixel ..."
        ;   Label: caseD_88760818
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 10002195
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016478                     ; 1000219d | = "D3DERR_ZBUFF_NEEDS_SYSTEMMEMORY: The ..."
        ;   Label: caseD_887602e9
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100021a2
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016558                     ; 100021aa | = "D3DERR_ZBUFF_NEEDS_VIDEOMEMORY: The r..."
        ;   Label: caseD_887602ea
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100021af
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x10016634                     ; 100021b7 | = "D3DERR_ZBUFFER_NOTPRESENT: The reques..."
        ;   Label: LAB_100021b7
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100021bc
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    PUSH 0x100166c8                     ; 100021c4 | = "D3DERR_ELIFINO: An unknown D3D error ..."
        ;   Label: caseD_887602be
    CALL dll_dx7.cpp_fatalError_FUN_10002340 ; 100021c9
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; void dll_dx7.cpp_fatalError_FUN_10002340(char * message)
    RET                                 ; 100021d1
        ;   Label: LAB_100021d1

